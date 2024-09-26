// commands.c
#include "commands.h"
#include "vga.h"

void execute_command(const char* cmd) {
    if (strcmp(cmd, "help") == 0) {
        print("Comandos disponibles: help, clear\n");
    } else if (strcmp(cmd, "clear") == 0) {
        vga_init();
    } else {
        print("Comando no reconocido\n");
    }
}
