#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme.
 * Return: Always 0.
*/

int main(void)
{
	int sum, ch;

	srand(time(NULL));
	while (sum <= 2646)
	{
		ch = rand() % 120;
		putchar(ch);
		sum += ch;
	}
	putchar(2772 - sum);
	return (0);
}
