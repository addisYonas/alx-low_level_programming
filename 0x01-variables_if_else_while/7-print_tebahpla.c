#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * Description:lowercase alphabet in reverse
 * print zyxw....
 * Return: 0
 */
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int arrayLength = strlen(ch);

	for (i = arrayLength - 1; i >= 0 ; i--)
	{
		putchar(ch[i]);
	}
	putchar('\n');

	return (0);
}
