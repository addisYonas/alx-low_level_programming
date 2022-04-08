#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *Description:print the aplphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	int arrayLength = strlen(ch);

	for (i = 0 ; i < arrayLength ; i++)
	{
		putchar(ch[i]);
	}
	return (0);
}
