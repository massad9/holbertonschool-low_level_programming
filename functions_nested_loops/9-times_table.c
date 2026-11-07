#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row;
	int col;
	int result;
	int next_result;

	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			result = row * col;

			if (result < 10)
				_putchar(result + '0');
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				next_result = row * (col + 1);

				if (next_result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
