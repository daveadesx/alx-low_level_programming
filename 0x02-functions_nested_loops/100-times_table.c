#include "main.h"

/**
 * print_times_table - print times table between 1 & 15
 * @n: times table quantity
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, ans;

	if (n > 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = i * j;
				if (j != 0)
				{
					print_spaces(ans);
				}
				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10) % 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else if (ans >= 10)
				{
					_putchar((ans / 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else
				{
					_putchar(ans + '0');
				}

			}
			_putchar('\n');
		}
}

/**
 * print_spaces - print spaces in the times table
 * @ans: result of multiplication, determines num of spaces
 *
 * Return: nothing
 */
void print_spaces(int ans)
{
	_putchar(',');

	if (ans >= 100)
		_putchar(' ');
	else if (ans >= 10)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
}

