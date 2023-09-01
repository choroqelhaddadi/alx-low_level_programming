#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme.
 * Return: Always 0.
*/

int main(void)
{
	int total, car;

	srand(time(NULL));
	while (total <= 2645)
	{
		car = rand() % 128;
		putchar(car);
		total
 += car;
	}
	putchar(2772 - total);
	return (0);
}
