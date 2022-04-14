#include "main.h"

/**
 * print_line - to draw a straight line
 * @n:number
 * Return: Always 0.
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
