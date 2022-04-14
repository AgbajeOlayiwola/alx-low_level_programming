#include "main.h"

/**
 * main - check the code.
 * Description: A function that prints the alphabet, in lowercase
 * Return: void
 */
void times_table(void)
{
	int i, j, n, x, y;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			n = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n > 9)
			{
				x = n / 10 + '0';
				y = n % 10 + '0';
				_putchar(x);
				_putchar(y);
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
