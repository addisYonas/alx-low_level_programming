#include "main.h"

/**
 * print_square - print a square
 * @n:number
 * Return:0
 */

void print_square(int n)
{
	int i, j = 0;

	while (j < n)
	{
		i = 0;
		while (i < n)
		{
		_putchar('#');
		i++;
		}
		_putchar('\n');
		j++;
	}
}
