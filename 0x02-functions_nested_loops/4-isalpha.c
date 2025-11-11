#include "main.h"

/**
 * _isalpha - Checks if an input is an alphabet
 *
 * @c: input to be checked
 * Return:1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
