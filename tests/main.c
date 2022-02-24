#include <stdio.h>
#include "../includes/ft_printf.h"

int main()
{
    char    *name = "FIDEL";
    printf("Pointer address: %p\n", &name);
    printf("Pointer address (using hex): %#lx\n", (unsigned long)&name);
    printf("Print %%%%\n");

    ft_printf("Testing printing char: %c%c%c%c%c\n", 'f', 'i', 'd', 'e', 'l');
}