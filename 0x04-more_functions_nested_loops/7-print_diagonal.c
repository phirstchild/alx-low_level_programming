#include "main.h"

/**
 * print_diagonal - prints splash
 * @n: parameter
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		_putchar('\n');
	} else
	{
		for (; i < n; i++)
		{
			for (j = 0; j < 1; j++)
			{
				if (j == i)

					_putchar('\\');

				else if (j < i)
					_putchar(' ');

			}

			_putchar('\n');
		}
	}
	


}

