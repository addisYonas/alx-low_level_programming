#include "main.h"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
	int count = 0, j, i;
	char temp;

	while (s[count] != '\0')
		count++;
	
	i = 0;
	j = count / 2;
	while (j--)
	{
		temp = s[count - i - 1];
		s[count -i -1] = s[i];
		s[i] = temp;
		i++;
	}
}
