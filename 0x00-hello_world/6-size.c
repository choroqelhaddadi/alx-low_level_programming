#include <stdio.h>
/**
 * main - function main is the entry point of the C program
 * Return: program should always return 0 when success
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of a int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long));
	printf("Size of a long long int: %d byte(s)", sizeof(long long));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
