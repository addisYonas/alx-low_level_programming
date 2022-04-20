#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two string
 * @dest:string
 * @src:string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, a = -1;

	for (i = 0; dest[i] != '\0'; i++);
	
	do
	{
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
