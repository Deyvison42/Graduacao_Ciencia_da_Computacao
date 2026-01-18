import pyautogui
import time
import threading
import tkinter as tk
from tkinter import messagebox

pyautogui.FAILSAFE = True

stop_event = threading.Event()
thread = None

cliques_segundo = 0

# ================= FUNÇÕES =================

def auto_click_preciso(cps):
    global cliques_segundo
    intervalo = 1 / cps
    proximo = time.perf_counter()

    while not stop_event.is_set():
        agora = time.perf_counter()
        if agora >= proximo:
            pyautogui.click()
            cliques_segundo += 1
            proximo += intervalo

def auto_click_turbo():
    global cliques_segundo
    while not stop_event.is_set():
        pyautogui.click()
        cliques_segundo += 50

def atualizar_cps():
    global cliques_segundo
    cps_label.config(text=f"CPS atual: {cliques_segundo}")
    cliques_segundo = 0

    if not stop_event.is_set():
        janela.after(1000, atualizar_cps)
    else:
        cps_label.config(text="CPS atual: 0")

def iniciar():
    global thread, cliques_segundo

    if thread and thread.is_alive():
        return

    cliques_segundo = 0
    cps_label.config(text="CPS atual: 0")

    stop_event.clear()

    # TURBO
    if turbo_var.get():
        status.config(text="Status: TURBO", fg="purple")
        thread = threading.Thread(
            target=auto_click_turbo,
            daemon=True
        )
        thread.start()
        janela.after(1000, atualizar_cps)
        return

    # NORMAL
    try:
        cps = float(entry_cps.get())
        if cps <= 0 or cps > 50:
            raise ValueError
    except ValueError:
        messagebox.showerror(
            "Erro",
            "Digite um CPS válido (1 a 50)"
        )
        stop_event.set()
        return

    status.config(text="Status: ATIVO", fg="green")

    thread = threading.Thread(
        target=auto_click_preciso,
        args=(cps,),
        daemon=True
    )
    thread.start()

    janela.after(1000, atualizar_cps)

def parar():
    stop_event.set()
    status.config(text="Status: PARADO", fg="red")

def sair():
    stop_event.set()
    janela.destroy()

def sempre_na_tela():
    janela.attributes("-topmost", sempre_visivel.get())

# ================= INTERFACE =================

janela = tk.Tk()
janela.title("Auto Clicker - CPS Real")
janela.geometry("360x420")
janela.resizable(False, False)

tk.Label(
    janela,
    text="AUTO CLICKER AVANÇADO",
    font=("Arial", 14, "bold")
).pack(pady=10)

tk.Label(janela, text="CPS (modo normal — até 50)").pack()
entry_cps = tk.Entry(janela, justify="center")
entry_cps.insert(0, "20")
entry_cps.pack(pady=5)

turbo_var = tk.BooleanVar()
tk.Checkbutton(
    janela,
    text="Modo TURBO (sem limite)",
    variable=turbo_var
).pack(pady=5)

status = tk.Label(janela, text="Status: PARADO", fg="red")
status.pack(pady=5)

cps_label = tk.Label(
    janela,
    text="CPS atual: 0",
    font=("Arial", 16, "bold")
)
cps_label.pack(pady=15)

tk.Button(janela, text="Iniciar", width=30, command=iniciar).pack(pady=4)
tk.Button(janela, text="Parar", width=30, command=parar).pack(pady=4)

sempre_visivel = tk.BooleanVar()
tk.Checkbutton(
    janela,
    text="Sempre ficar na tela",
    variable=sempre_visivel,
    command=sempre_na_tela
).pack(pady=6)

tk.Button(janela, text="Sair", width=30, command=sair).pack(pady=6)

janela.protocol("WM_DELETE_WINDOW", sair)
janela.mainloop()
import pyautogui
import threading
import tkinter as tk
import time

pyautogui.FAILSAFE = True

stop_event = threading.Event()
thread = None

cliques_segundo = 0

# ================= FUNÇÕES =================

def auto_click_turbo_max():
    global cliques_segundo
    while not stop_event.is_set():
        pyautogui.click()
        cliques_segundo += 1

def atualizar_cps():
    global cliques_segundo
    cps_label.config(text=f"CPS atual: {cliques_segundo}")
    cliques_segundo = 0

    if not stop_event.is_set():
        janela.after(1000, atualizar_cps)
    else:
        cps_label.config(text="CPS atual: 0")

def iniciar():
    global thread, cliques_segundo

    if thread and thread.is_alive():
        return

    cliques_segundo = 0
    cps_label.config(text="CPS atual: 0")

    stop_event.clear()
    status.config(text="Status: TURBO ILIMITADO", fg="purple")

    thread = threading.Thread(
        target=auto_click_turbo_max,
        daemon=True
    )
    thread.start()

    janela.after(1000, atualizar_cps)

def parar():
    stop_event.set()
    status.config(text="Status: PARADO", fg="red")

def sempre_na_tela():
    janela.attributes("-topmost", sempre_visivel.get())

def sair():
    stop_event.set()
    janela.destroy()

# ================= INTERFACE =================

janela = tk.Tk()
janela.title("Auto Clicker - TURBO")
janela.geometry("320x300")
janela.resizable(False, False)

tk.Label(
    janela,
    text="AUTO CLICKER TURBO",
    font=("Arial", 14, "bold")
).pack(pady=10)

status = tk.Label(janela, text="Status: PARADO", fg="red")
status.pack(pady=5)

cps_label = tk.Label(
    janela,
    text="CPS atual: 0",
    font=("Arial", 18, "bold")
)
cps_label.pack(pady=15)

tk.Button(janela, text="Iniciar TURBO", width=28, command=iniciar).pack(pady=4)
tk.Button(janela, text="Parar", width=28, command=parar).pack(pady=4)

sempre_visivel = tk.BooleanVar()
tk.Checkbutton(
    janela,
    text="Sempre ficar na tela",
    variable=sempre_visivel,
    command=sempre_na_tela
).pack(pady=5)

tk.Button(janela, text="Sair", width=28, command=sair).pack(pady=6)

janela.protocol("WM_DELETE_WINDOW", sair)
janela.mainloop()
