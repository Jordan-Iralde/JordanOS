# kernel/process_manager.py
class Process:
    def __init__(self, pid, name):
        self.pid = pid
        self.name = name
        self.state = 'READY'

class ProcessManager:
    def __init__(self):
        self.process_list = []

    def create_process(self, name):
        pid = len(self.process_list) + 1
        process = Process(pid, name)
        self.process_list.append(process)
