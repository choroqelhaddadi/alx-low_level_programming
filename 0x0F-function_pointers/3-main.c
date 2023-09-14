#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point to program
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, r;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') & (arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	r = func(arg1, arg2);

	printf("%d\n", r);

	return (0);
}
