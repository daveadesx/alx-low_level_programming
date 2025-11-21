#include <stdio.h>

/**
 * main - find sum of even terms in the fibonacci seq. up to 4000000
 *
 * Return: nothing
 */
int main(void)
{
	long int prev, current, sum, tmp;

	prev = 1;
	current = 1;
	sum = 0;

	while (current <= 4000000)
	{
		if ((current % 2) == 0)
			sum += current;
		tmp =  current;
		current += prev;
		prev = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
