#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function main is the entry point of the C program
 * Return: program should always return 0 when success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'Z'; i++)
	{
		putchar(i);
		if (i == 'z')
			i = 'A' - 1;
	}
	putchar('\n');
	return (0);
}
