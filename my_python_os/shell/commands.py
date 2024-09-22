# shell/commands.py

from kernel.process_manager import ProcessManager
from kernel.file_system import FileSystem

class CommandHandler:
    def __init__(self, process_manager: ProcessManager, file_system: FileSystem):
        self.process_manager = process_manager
        self.file_system = file_system

    def run(self, name):
        """Crea y ejecuta un nuevo proceso."""
        self.process_manager.create_process(name)
        print(f"Proceso '{name}' creado y en ejecución.")

    def ls(self):
        """Lista los archivos en el sistema de archivos."""
        if not self.file_system.files:
            print("No hay archivos en el sistema.")
        else:
            print("Archivos en el sistema:")
            for filename in self.file_system.files:
                print(f"- {filename}")

    def create(self, filename, content):
        """Crea un nuevo archivo en el sistema de archivos."""
        self.file_system.create_file(filename, content)
        print(f"Archivo '{filename}' creado.")

    def read(self, filename):
        """Lee el contenido de un archivo."""
        content = self.file_system.read_file(filename)
        print(f"Contenido de '{filename}': {content}")

    def exit(self):
        """Sale del sistema operativo."""
        print("Saliendo del sistema operativo...")
        exit(0)
