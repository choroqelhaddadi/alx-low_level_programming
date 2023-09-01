#include <stdio.h>

int is_number(char s[]);
int atoi(char *s);
/**
 * main - adds positive numbers.
 *
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int i = 1, add_ = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if ((!(is_number(argv[i]))))
			{
				printf("Error\n");
				return (1);
			}
			add_ = add_ + atoi(argv[i]);
			i++;
		}
		printf("%i\n", add_);
	}
	return (0);
}

/**
 * atoi - converts string to int.
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

/**
 * is_number - checks if a string is a number.
 *
 * @s: string to be checked.
 *
 * Return: 1 if int, otherwise return 0.
*/

int is_number(char s[])
{
	int len = 0;

	if (s[len] == '-')
	{
		len++;
	}

	while (s[len] != '\0')
	{
		if (s[len] > 57 || s[len] < 48)
		{
			return (0);
		}
		len++;
	}

	return (1);
}
