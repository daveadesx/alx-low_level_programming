#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 *
 * @c: char to be checked
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if ((c >= 60) & (c <= 90))
		return (1);
	return (0);
}
