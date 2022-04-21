#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @n:number of elements of the array
 * @a:an array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
