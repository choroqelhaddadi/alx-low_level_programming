#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz
 * for the multiples of five print Buzz.
 * For numbers multiples of both three and five print FizzBuzz.
 *
 * Return: always return 0 at success.
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
