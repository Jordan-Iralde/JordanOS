# main.py

# Importamos los módulos del sistema operativo
from kernel.process_manager import ProcessManager
from kernel.memory_manager import MemoryManager
from kernel.file_system import FileSystem
from kernel.interrupt_manager import handle_interrupt
from shell.shell import Shell
import signal

def initialize_system():
    """
    Inicializa los componentes básicos del sistema operativo.
    """
    # Crear el gestor de procesos
    process_manager = ProcessManager()

    # Crear el gestor de memoria con un límite de memoria de 1024 MB
    memory_manager = MemoryManager(total_memory=1024)

    # Crear el sistema de archivos
    file_system = FileSystem()

    # Retornar todos los componentes inicializados
    return process_manager, memory_manager, file_system

def main():
    """
    Punto de entrada principal para el sistema operativo.
    """
    # Inicializar el sistema
    process_manager, memory_manager, file_system = initialize_system()

    # Manejo de interrupciones
    signal.signal(signal.SIGINT, handle_interrupt)

    # Iniciar la shell (intérprete de comandos)
    shell = Shell()
    shell.run()

if __name__ == "__main__":
    main()
