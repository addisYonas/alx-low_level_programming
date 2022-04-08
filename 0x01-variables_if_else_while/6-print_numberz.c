#include <stdio.h>
/**
 * main - main block
 * Description:prints all single digit numbers of base 10 starting from 0
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
