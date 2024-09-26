; bootloader.asm
[org 0x7c00]        ; Punto de inicio para el bootloader

start:
    mov ax, 0x10    ; Configurar el segmento de datos
    mov ds, ax
    mov es, ax

    ; Cargar el kernel (asumimos que está en el disco después del bootloader)
    mov bx, 0x1000  ; Dirección donde cargar el kernel
    call load_kernel

    ; Saltar al kernel cargado
    jmp 0x1000

load_kernel:
    ; Aquí iría el código para leer del disco y cargar el kernel
    ret

times 510-($-$$) db 0
dw 0xAA55         ; Firma del sector de arranque
