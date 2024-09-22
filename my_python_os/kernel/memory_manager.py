# kernel/memory_manager.py
class MemoryManager:
    def __init__(self, total_memory):
        self.total_memory = total_memory
        self.free_memory = total_memory

    def allocate_memory(self, process, size):
        if size <= self.free_memory:
            self.free_memory -= size
            return True
        return False
