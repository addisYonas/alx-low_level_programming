#include "main.h"
/**
 * main - Entry point
 * Description: print _putchar
 * Return:0
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;
	int length = sizeof(c);

	while (i < length - 1)
	{
	_putchar(c[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
