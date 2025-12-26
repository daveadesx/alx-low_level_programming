#include "main.h"

/**
 * _isdigit - Checks is a char is a digit
 *
 * @c: char to be checked
 * Return: 1 if yes, 0 if no
 */
int _isdigit(int c)
{
	if ((c >= 48) & (c <= 57))
		return (1);
	return (0);
}
