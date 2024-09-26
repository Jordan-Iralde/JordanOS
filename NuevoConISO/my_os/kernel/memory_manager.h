// memory_manager.h
#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

#include <stddef.h>

void init_memory();
void* alloc_mem(size_t size);
void free_mem(void* ptr);

#endif
