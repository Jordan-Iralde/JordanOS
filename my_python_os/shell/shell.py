# shell/shell.py

from kernel.process_manager import ProcessManager
from kernel.file_system import FileSystem
from shell.commands import CommandHandler

class Shell:
    def __init__(self):
        self.pm = ProcessManager()
        self.fs = FileSystem()
        self.command_handler = CommandHandler(self.pm, self.fs)

    def run(self):
        while True:
            command_input = input("os> ")
            self.handle_command(command_input)

    def handle_command(self, command_input):
        parts = command_input.split()
        command = parts[0]
        
        if command == 'run':
            self.command_handler.run(parts[1])
        elif command == 'ls':
            self.command_handler.ls()
        elif command == 'create':
            self.command_handler.create(parts[1], ' '.join(parts[2:]))
        elif command == 'read':
            self.command_handler.read(parts[1])
        elif command == 'exit':
            self.command_handler.exit()
        else:
            print("Comando no reconocido.")
