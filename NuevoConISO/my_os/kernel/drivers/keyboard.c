#include "keyboard.h"
#include "ports.h"
#include "interrupts.h"  // Asegúrate de incluir el encabezado de interrupciones

#define KEYBOARD_PORT 0x60

// Definición de un búfer para las teclas presionadas
static char key_buffer[256];
static int buffer_index = 0;

const char keymap[] = {
    0,  27, '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 0,
    '\t', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\n',
    0, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`', 0,
    '\\', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', 0,
    '*', 0, ' ', 0
};

// Inicializa el teclado
void keyboard_init() {
    // Configura el manejador de interrupciones
    register_interrupt_handler(33, keyboard_callback); // IRQ1 es 33
}

// Callback del teclado
void keyboard_callback() {
    unsigned char scancode = port_byte_in(KEYBOARD_PORT);
    if (scancode < sizeof(keymap)) {
        char key = keymap[scancode];
        if (key != 0) {
            key_buffer[buffer_index++] = key;  // Guarda el carácter en el búfer
        }
    }
}
