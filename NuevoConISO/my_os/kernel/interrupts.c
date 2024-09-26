#include "interrupts.h"
#include "include/keyboard.h"

// Vector de interrupciones
void (*interrupt_handlers[256])();

// Inicializa el sistema de interrupciones
void init_interrupts() {
    // Inicializa los manejadores de interrupciones (mapeo básico)
    for (int i = 0; i < 256; i++) {
        interrupt_handlers[i] = 0;
    }

    // Configura el manejador para el teclado (IRQ1)
    register_interrupt_handler(33, keyboard_callback); // IRQ1 es 33 en x86
}

// Registra un manejador de interrupción
void register_interrupt_handler(uint8_t n, void (*handler)()) {
    interrupt_handlers[n] = handler;
}

// Maneja la interrupción
void interrupt_handler(uint8_t interrupt_number) {
    if (interrupt_handlers[interrupt_number]) {
        interrupt_handlers[interrupt_number]();
    }
}
