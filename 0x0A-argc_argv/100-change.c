#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
		printf("0\n");
	else
	{
		if (x / 25)
		{
			sum += (x / 25);
			x %= 25;
		}
		if (x / 10)
		{
			sum += (x / 10);
			x %= 10;
		}
		if (x / 5)
		{
			sum += (x / 5);
			x %= 5;
		}
		if (x / 2)
		{
			sum += (x / 2);
			x %= 2;
		}
		if (x / 1)
		{
			sum += (x / 1);
			x %= (1);
		}
		printf("%i\n", sum);
	}
	return (0);
}
