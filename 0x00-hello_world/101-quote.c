#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char output[] = "and that piece of art is useful\"-Dora Korpar,2015-10-19\n";
size_t i = 0;
size_t arrayLength = strlen(output);
for (i = 0 ; i < arrayLength ; i++)
{
putchar(output[i]);
}
return (1);
}

