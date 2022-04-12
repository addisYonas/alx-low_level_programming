#include "main.h"
 /*
 * main - main block
 * Description:print _putchar
 * return:
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;
	int length = sizeof(c);
	
	while (i < length)
	{
		_putchar(c[i]);
			i++;
	}
	_putchar('\n');
	return (0);
}
