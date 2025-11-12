#include "main.h"

/**
 * print_last_digit - prints last digit of a num
 * @n: int whose last digit is to be printed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (ld);
}
