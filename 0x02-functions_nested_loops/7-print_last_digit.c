#include "main.h"

/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
