// shell.c
#include "shell.h"
#include "commands.h"
#include "vga.h"

void shell() {
    print("MyOS Shell v0.1\n");
    print("> ");
    
    char command[100];
    while (1) {
        // Aquí deberías leer y procesar comandos
        // Por ahora es solo un loop de shell
    }
}
