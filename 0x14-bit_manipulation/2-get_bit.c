#include "main.h"

/**
 * get_bit - returns the value of abit at a given index.
 * @n: number to check bits in
 * @index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	y = n & x;
	if (y == x)
		return (1);
	return (0);
}
