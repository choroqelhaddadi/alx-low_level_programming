#include "main.h"

/**
 * primenumber - function find if a number is prime or not.
 *
 * @n: integer number.
 * @x: value of (n - 1).
 * Return: returns 1 if n is a prime number, otherwise return 0.
 */

int primenumber(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x != 0)
	{
		return (primenumber(n, x - 1));
	}
	return (0);
}


/**
 * is_prime_number -  a function that returns 1 if the
 * input integer is a prime number
 * otherwise return 0.
 *
 * @n: integer.
 *
 * Return: returns 1 if input integer a prime number,
 * otherwise return 0.
 *
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (primenumber(n, n - 1));
}

