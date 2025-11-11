#include "main.h"

/**
 * _islower - determines if a char is lowercase
 *
 * @c: char to be checked
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
