#include <stdio.h>

/**
 * main - prints first 50 Fibonacci
 * Return: 0 at success
 */

int main(void)
{
	long f_0 = 1, f_1 = 2, fd, sum;
	int i;

	for (i = 0; ; i++)
	{
		if (i == 0)
		{
			fd = f_0;
		}
		else if (i == 1)
		{
			fd = f_1;
		}
		else
		{
			fd = f_1 + f_0;
			f_0 = f_1;
			f_1 = fd;
			if (fd > 4000000)
			{
				break;
			}
		}

		if ((fd % 2) == 0)
		{
			sum += fd;
		}

	}
	printf("%ld\n", sum);
	return (0);
}
