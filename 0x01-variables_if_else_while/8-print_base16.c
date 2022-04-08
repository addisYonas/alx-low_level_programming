#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char num = '0';
	char c = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');


	return (0);
}
