# kernel/file_system.py
class FileSystem:
    def __init__(self):
        self.files = {}

    def create_file(self, filename, content):
        self.files[filename] = content

    def read_file(self, filename):
        return self.files.get(filename, "File not found")
