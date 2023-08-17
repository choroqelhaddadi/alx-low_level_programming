#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci
 * Return: 0 if success
 */

int main(void)
{
	long f0 = 1, f1 = 2, fd;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			fd = f0;
		}
		else if (i == 1)
		{
			fd = f1;
		}
		else
		{
			fd = f1 + f0;
			f0 = f1;
			f1 = fd;
		}

		printf("%ld", fd);

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
