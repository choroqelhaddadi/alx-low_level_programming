#include <stdio.h>

int atoi(char *s);

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	}
	return (0);
}

/**
 * atoi - converts a string to int.
 *
 * @s: string.
 *
 * Return: number.
*/

int atoi(char *s)
{
	int len = 0, num = 0, sign = 1;

	while (s[len] != '\0')
	{
		if (s[len] == '-')
		{
			sign = -1;
			len++;
		}

		num = (num * 10) + (s[len] - '0');
		len++;
	}
	return (sign * num);
}
