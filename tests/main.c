/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:10:56 by flim              #+#    #+#             */
/*   Updated: 2022/02/26 22:26:33 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../includes/ft_printf.h"

// To check for memory leaks (macOS)
// system("leaks -atExit -- ./a.out");
int	main(void)
{
	char	*name;
	int		real_count;
	int		mine_count;

	name = "FIDEL";
	real_count = 0;
	mine_count = 0;
	printf("Pointer address: %p\n", &name);
	printf("Pointer address (using hex): %#lx\n", (unsigned long)&name);
	printf("Print %%%%\n");
 
	ft_printf("Print %%%");
	printf("\n");
	//printf("Printf %%%\n");
	//ft_printf("Test %/\n");
	//printf("Test %/");

	printf("\nCHAR TESTER\n-----------------\n");
	mine_count += ft_printf("Mine: Testing char: %c%c%c%c%c\n",
			'f', 'i', 'd', 'e', 'l');
	real_count += printf("Real: Testing char: %c%c%c%c%c\n",
			'f', 'i', 'd', 'e', 'l');
	printf("-----------------\n");

	printf("\nSTR TESTER\n-----------------\n");
	mine_count += ft_printf("Mine: Testing str: %s%s\n", "", "42 Abu Dhabi");
	mine_count += ft_printf("MINE: NULL str: %s\n", (char *)NULL);	
	real_count += printf("Real: Testing str: %s%s\n", "", "42 Abu Dhabi");
	real_count += printf("REAL: NULL str: %s\n", (char *)NULL);
	printf("-----------------\n");

	printf("\nINT TESTER\n-----------------\n");
	mine_count += ft_printf("Mine: int using %%d: %d\n", 11);
	mine_count += ft_printf("Mine: Max INT: %d || Min INT: %d\n",
			INT_MAX, INT_MIN);
	mine_count += ft_printf("Mine: int using %%i: %i\n", 42);
	real_count += printf("Real: int using %%d: %d\n", 11);
	real_count += printf("Real: Max INT: %d || Min INT: %d\n",
			INT_MAX, INT_MIN);
	real_count += printf("Real: int using %%i: %i\n", 42);
	printf("-----------------\n");

	printf("\nUNSIGNED INT TESTER\n-----------------\n");
	mine_count += ft_printf("Mine: uint using %%u: %u\n", 11);
	mine_count += ft_printf("Mine: uint using %%u: %u\n", -100);
	mine_count += ft_printf("Mine: Max UINT: %u || Min UINT: %u\n",
			UINT_MAX, 0);
	real_count += printf("Real: uint using %%u: %u\n", 11);
	real_count += printf("Real: uint using %%u: %u\n", -100);
	real_count += printf("Real: Max UINT: %u || Min UINT: %u\n",
			UINT_MAX, 0);
	printf("-----------------\n");

	printf("\nHEX TESTER (lowercase)\n-----------------\n");
	mine_count += ft_printf("Mine: uint using %%x: %x\n", 11);
	mine_count += ft_printf("Mine: uint using %%x: %x\n", -100);
	mine_count += ft_printf("Mine: Max UINT: %x || Min UINT: %x\n",
			UINT_MAX, 0);
	mine_count += ft_printf("Mine: pointer address: %x\n", 9999);
	real_count += printf("Real: uint using %%x: %x\n", 11);
	real_count += printf("Real: uint using %%x: %x\n", -100);
	real_count += printf("Real: Max UINT: %x || Min UINT: %x\n",
			UINT_MAX, 0);
	real_count += printf("Real: pointer address: %x\n", 9999);
	printf("-----------------\n");

	printf("\nHEX TESTER (uppercase)\n-----------------\n");
	mine_count += ft_printf("Mine: uint using %%X: %X\n", 11);
	mine_count += ft_printf("Mine: uint using %%X: %X\n", -100);
	mine_count += ft_printf("Mine: Max UINT: %X || Min UINT: %X\n",
			UINT_MAX, 0);
	mine_count += ft_printf("Mine: pointer address: %X\n", 9999);
	real_count += printf("Real: uint using %%X: %X\n", 11);
	real_count += printf("Real: uint using %%X: %X\n", -100);
	real_count += printf("Real: Max UINT: %X || Min UINT: %X\n",
			UINT_MAX, 0);
	real_count += printf("Real: pointer address: %X\n", 9999);
	printf("-----------------\n");

    // return total number of characters
	printf("\n-----------------\n");
	printf("%-20s %-3c%-6s%-3c%-6s%c\n", "",
		'|', "Mine", '|', "Real", '|');
	printf("%-20s %-4c%-5d%-4c%-5d%c",
		"Total string count", '|', mine_count, '|', real_count, '|');
	printf("\n-----------------\n");
}
