#include "main.h"

/**
 * _abs - computes absolute value of an int
 * @n: operand
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
