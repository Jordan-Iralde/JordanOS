#!/bin/bash

# Crear la carpeta necesaria para GRUB
mkdir -p iso/boot/grub

# Copiar el kernel a la carpeta de arranque
cp kernel.bin iso/boot/

# Crear el archivo de configuración de GRUB
cp boot/grub.cfg iso/boot/grub/

# Crear la ISO usando GRUB
grub-mkrescue -o my_os.iso iso/
