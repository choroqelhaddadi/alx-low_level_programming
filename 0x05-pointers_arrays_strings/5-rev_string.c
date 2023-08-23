#include "main.h"
/**
 * rev_string - function that reverses a string.
 *
 * @s: string to be reversed.
 *
 *
*/

void rev_string(char *s)
{

	int i = 0, length, startpoint;
	char c;

	while (*(s + i) != '\0')
	{
		i++;
	}

	i--;
	length = i;
	if (i % 2 == 0)
	{
		(startpoint = length / 2);
	}
	else
	{
		(startpoint = (length / 2) + 1);
	}

	while (i >= startpoint)
	{
		c = *(s + i);
		*(s + i) = *(s + length - i);
		*(s + length - i) = c;
		i--;
	}
}
