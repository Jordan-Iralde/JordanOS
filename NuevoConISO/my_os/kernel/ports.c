#include "ports.h"

// Función para leer un byte desde un puerto
uint8_t port_byte_in(uint16_t port) {
    uint8_t result;
    __asm__ __volatile__ (
        "inb %1, %0"
        : "=a"(result) // Salida: el resultado se coloca en 'result'
        : "Nd"(port)   // Entrada: el puerto
    );
    return result; // Retorna el byte leído
}

// Función para escribir un byte a un puerto
void port_byte_out(uint16_t port, uint8_t value) {
    __asm__ __volatile__ (
        "outb %0, %1" // Instrucción para enviar 'value' al puerto
        :
        : "a"(value), "Nd"(port) // Entradas: 'value' y 'port'
    );
}
