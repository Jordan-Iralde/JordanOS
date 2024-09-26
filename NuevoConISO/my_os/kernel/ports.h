#ifndef PORTS_H
#define PORTS_H

#include <stdint.h> // Necesario para uint8_t y uint16_t

uint8_t port_byte_in(uint16_t port);
void port_byte_out(uint16_t port, uint8_t value);

#endif // PORTS_H
