#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int x1 = 0, x2 = 0, z;

	for (x1 = 0; x1 <= 9; x1++)
	{
		for (x2 = 0; x2 <= 9; x2++)
		{
			z = x1 * x2;

			if (z >= 10)
			{
				_putchar(((z / 10) % 10) + '0');
			}
			_putchar((z % 10) + '0');

			if (x2 != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((x1 * (x2 + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}


}
