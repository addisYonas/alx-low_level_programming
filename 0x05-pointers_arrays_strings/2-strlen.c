#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: 0 or 1
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
