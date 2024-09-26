# Definición de variables
CC = gcc
CFLAGS = -m32 -ffreestanding -c -Wall -Wextra
LDFLAGS = -m32 -T linker.ld

# Archivos objeto
OBJ = kernel.o ports.o keyboard.o interrupts.o

# Regla para construir el objetivo final
all: kernel.bin

# Regla para crear kernel.bin a partir de los archivos objeto
kernel.bin: $(OBJ)
	ld $(LDFLAGS) -o kernel.bin $(OBJ)

# Regla para compilar los archivos .c en archivos .o
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

# Regla para limpiar archivos temporales
clean:
	rm -f *.o kernel.bin
