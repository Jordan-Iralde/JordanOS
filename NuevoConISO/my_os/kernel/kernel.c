#include "kernel.h"
#include "keyboard.h"
#include "interrupts.h"
#include <stdint.h>

void kernel_main() {
    vga_init();               // Inicializar la pantalla (VGA)
    print("Bienvenido a MyOS!\n");

    init_interrupts();        // Inicializar el sistema de interrupciones
    keyboard_init();          // Inicializar el teclado

    while (1) {
        // Lógica del sistema operativo
    }
}
