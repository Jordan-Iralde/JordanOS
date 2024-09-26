#ifndef INTERRUPTS_H
#define INTERRUPTS_H

#include <stdint.h> // Asegúrate de incluir esto para uint8_t

void register_interrupt_handler(uint8_t n, void (*handler)());
void init_interrupts();
void interrupt_handler(uint8_t interrupt_number);

#endif // INTERRUPTS_H
