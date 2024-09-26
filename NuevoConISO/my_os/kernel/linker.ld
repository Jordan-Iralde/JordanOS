/* linker.ld */
OUTPUT_FORMAT("elf32-i386")
OUTPUT_ARCH(i386)
ENTRY(kernel_main)

SECTIONS
{
    /* Define la sección de texto, donde va el código */
    .text ALIGN(4) :
    {
        *(.text)         /* Incluye todas las secciones de texto de los archivos objeto */
    }

    /* Define la sección de datos, donde van los datos inicializados */
    .data ALIGN(4) :
    {
        *(.data)         /* Incluye todas las secciones de datos de los archivos objeto */
    }

    /* Define la sección de bss, donde van los datos no inicializados */
    .bss ALIGN(4) :
    {
        *(.bss)          /* Incluye todas las secciones bss de los archivos objeto */
    }

    /* Sección de pila */
    .bss_stack (NOLOAD) :
    {
        . = ALIGN(4);
        __stack = .;     /* Marca la dirección de inicio de la pila */
        . = . + 0x1000;  /* Reserva 4KB para la pila */
    }
}
