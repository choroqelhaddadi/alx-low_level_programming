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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	else
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	return (0);
}
