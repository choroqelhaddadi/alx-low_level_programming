#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of elements used from S2
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0, s;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n >= l2)
	{
		s = l1 + l2 + 1;
	}
	else
	{
		s = l1 + n + 1;
	}
	p = malloc(sizeof(char) * s);
	if (p == NULL)
		return (NULL);

	while (i < l1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		p[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		p[i++] = s2[j++];

	p[i] = 0;

	return (p);
}
