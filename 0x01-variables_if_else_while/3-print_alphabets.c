#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *Description:print the aplphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
char ch[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
int arrayLength = strlen(ch);

for (i = 0 ; i < arrayLength ; i++)
{
putchar(ch[i]);
}

for (i = 0 ; i < arrayLength ; i++)
{
if (ch[i] >= 'a' && ch[i] <= 'z')
{
ch[i] = ch[i] - 32;
putchar(ch[i]);
}
}
return (0);
}
