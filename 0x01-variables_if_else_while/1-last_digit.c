#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function main is the entry point of the C program
 * Return: program should always return 0 when success
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;

	if (ldigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	else if (ldigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	return (0);
}
