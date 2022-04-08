#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number
 * and check the last digit if greater than 5,0 and 6
 * Return: 0
 */
int main(void)
{
/* n stand for number,last stand for lastDigit of n*/
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 6)
		printf("Last digit of %i is %i and less than 6 and not 0\n", n, last);
	else if (last < 5)
		printf("Last digit of %i is %i and is greater than 5 and not 0\n", n, last);
	else
		printf("Last digit of %i is %i and is 0\n", n, last);
	return (0);
}
