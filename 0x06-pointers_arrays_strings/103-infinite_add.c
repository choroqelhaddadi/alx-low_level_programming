#include "main.h"
#include <stdio.h>

/**
 * rm_zeros - removes left zeros.
 * @size: string size.
 * @r: string.
 * Return: poniter to r.
 */

char *rm_zeros(int size, char *r)
{
	int i = 0, first_digit;

		while (i < size)
	{
		if (r[i] != '0')
		{
			first_digit = i;
			break;
		}
		i++;
	}
	for (i = 0; i <= size; i++)
	{
		r[i] = r[i + first_digit];
	}
	return (r);
}

/**
 * infinite_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @size_r: the buffer size.
 * @r: result string.
 * Return: poniter to r if size_r is acceptable.
 * or return 0 if size_r less than the length of result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0;
	int lresult = size_r;
	int m1 = 1, m2 = 1, d1, d2, c = 0, sum = 0;

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 + 1 >= lresult || l2 + 1 >= lresult)
		return (0);
	r[lresult] = '\0';
	lresult--;
	l1--;
	l2--;
	while (lresult >= 0)
	{
		d1 = ((n1[l1] - '0') * m1);
		d2 = ((n2[l2] - '0') * m2);
		sum = d1 + d2 + c + '0';
		if (sum > '9')
		{
			sum = sum - 10;
			c = 1;
		}
		else
			c = 0;
		r[lresult] = sum;
		lresult--;
		if (l1 <= 0)
			m1 = 0;
		else
			l1--;
		if (l2 <= 0)
			m2 = 0;
		else
			l2--;
	}
	return (rm_zeros(size_r, r));
}
