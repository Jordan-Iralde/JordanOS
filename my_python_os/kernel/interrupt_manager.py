# kernel/interrupt_manager.py
import signal

def handle_interrupt(signal, frame):
    print("Interrupt received:", signal)

signal.signal(signal.SIGINT, handle_interrupt)
