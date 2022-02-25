#include <stdio.h>
#include "../includes/ft_printf.h"

int main()
{
    char    *name = "FIDEL";
    int     real_count = 0;
    int     mine_count = 0;
    printf("Pointer address: %p\n", &name);
    printf("Pointer address (using hex): %#lx\n", (unsigned long)&name);
    printf("Print %%%%\n");
 
    ft_printf("Print %%%");
    printf("\n");
   // printf("Printf %%%\n");
    ft_printf("Test %/\n");
    //printf("Test %/");

    ft_printf("MINE: NULL str: %s\n", (char *)NULL);
    printf("REAL: NULL str: %s\n", (char *)NULL);

    mine_count = ft_printf("Mine: Testing printing char: %c%c%c%c%c\n", 'f', 'i', 'd', 'e', 'l');
    real_count = printf("Real: Testing printing char: %c%c%c%c%c\n", 'f', 'i', 'd', 'e', 'l');
    
    // return total number of characters
    printf("\n-----------------\n");
    printf("%-15s %-3c%-6s%-3c%-6s%c\n", "", '|', "Mine", '|', "Real", '|');
    printf("%-15s %-4c%-5d%-4c%-5d%c", "String count", '|', mine_count, '|', real_count, '|');
    printf("\n-----------------\n");
}