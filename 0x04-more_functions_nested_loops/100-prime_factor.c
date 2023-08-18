#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: return 0 at success.
*/

int main(void)
{
	long int i, NUM, max;

	NUM = 612852475143;
	max = -1;

	while (NUM % 2 == 0)
	{
		max = 2;
		NUM /= 2;
	}

	for (i = 3; i <= sqrt(NUM); i = i + 2)
	{
		while (NUM % i == 0)
		{
			max = i;
			NUM = NUM / i;
		}
	}

	if (NUM > 2)
		max = NUM;

	printf("%ld\n", max);

	return (0);
}
