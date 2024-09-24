Proyecto: Mi Sistema Operativo
Descripción
Este proyecto tiene como objetivo la creación de un sistema operativo desde cero, con soporte para múltiples lenguajes de programación (Python, Rust, C++), y la integración de un asistente virtual para la optimización del sistema (JARVIS). Incluye componentes básicos como el kernel, gestión de procesos, controladores de hardware, y un sistema de archivos.

Etapas del Proyecto
1. Bootloader
Objetivo: Crear o configurar un bootloader (GRUB o personalizado) que cargue el kernel.
Archivos: boot/bootloader.asm, boot/grub.cfg
Tareas:
Escribir el bootloader o configurar GRUB.
Crear archivo de configuración para cargar el kernel.
2. Kernel Básico
Objetivo: Desarrollar el núcleo del sistema operativo.
Archivos: kernel/kernel.c, kernel/memory_manager.c, kernel/process_manager.c
Tareas:
Implementar la gestión de memoria.
Implementar la gestión de procesos.
Manejar interrupciones y excepciones.
3. Controladores de Hardware
Objetivo: Desarrollar controladores para pantalla y teclado.
Archivos: kernel/drivers/vga.c, kernel/drivers/keyboard.c
Tareas:
Implementar el controlador de pantalla (modo VGA).
Implementar el controlador de teclado.
4. Sistema de Archivos
Objetivo: Implementar un sistema de archivos básico.
Archivos: kernel/fs/file_system.c, kernel/fs/file_system.h
Tareas:
Crear, leer y escribir archivos.
5. Soporte para Python, Rust y C++
Objetivo: Permitir la ejecución de programas en diferentes lenguajes.
Archivos: languages/python/, languages/rust/, languages/cpp/
Tareas:
Integrar MicroPython.
Soporte para la ejecución de programas en Rust y C++.
6. Shell
Objetivo: Desarrollar una interfaz de línea de comandos interactiva.
Archivos: shell/shell.c, shell/commands.c
Tareas:
Implementar la shell para ejecutar comandos básicos.
Soporte para ejecutar scripts y programas.
7. Creación de la ISO
Objetivo: Compilar el sistema operativo en una imagen ISO.
Archivos: iso/iso_creator.sh, iso/my_os.iso
Tareas:
Compilar el kernel y empaquetarlo en una ISO.
Usar una máquina virtual para pruebas (QEMU, VirtualBox).
8. Integración de JARVIS
Objetivo: Implementar un asistente virtual que optimice el rendimiento del sistema.
Archivos: jarvis/jarvis.py, jarvis/task_optimizer.py
Tareas:
Automatizar la optimización de procesos y memoria.
Implementar diagnóstico en tiempo real del sistema.