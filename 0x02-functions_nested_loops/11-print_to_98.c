#include <stdio.h>

/**
 * print_to_98 - Print all numbers from n to 98
 * Return: nothing
 *
 * @n: start int
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	else
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	printf("\n");
}
