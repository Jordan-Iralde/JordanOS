// vga.c
#include "vga.h"

#define VGA_ADDRESS 0xB8000
#define VGA_WIDTH 80
#define VGA_HEIGHT 25

static char* vga_buffer = (char*) VGA_ADDRESS;

void vga_init() {
    for (int i = 0; i < VGA_WIDTH * VGA_HEIGHT * 2; i++) {
        vga_buffer[i] = 0;    // Limpiar la pantalla
    }
}

void print(const char* str) {
    int index = 0;
    while (str[index]) {
        vga_buffer[index * 2] = str[index];
        vga_buffer[index * 2 + 1] = 0x07;   // Atributo de color
        index++;
    }
}
