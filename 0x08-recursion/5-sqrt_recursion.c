#include "main.h"

/**
 * root - returns the natural square root of an integer number.
 *
 * @n: integer.
 * @m: used to find square root.
 * Return: returns root of a number
 *
 */
int root(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m < n)
	{
		return (root(n, m + 1));
	}

	return (-1);

}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 *
 * @n: number.
 *
 * Return: returns the natural square root of a number
 * If n does not have a natural square root,
 * the function should return -1
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (root(n, 0));
}
