#include "main.h"

/**
 * swap_int - swaps the value of tow integers
 *
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
