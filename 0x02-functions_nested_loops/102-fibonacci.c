#include <stdio.h>

/**
 * main - print first 50 fibonacci sequence
 *
 * Return: nothing
 */
int main(void)
{
	long int prev, current, count, tmp;

	prev = 1;
	current = 1;
	count = 0;

	while (1)
	{
		if (count >= 50)
			break;
		if (count != 0)
			printf(", ");
		printf("%ld", current);

		tmp =  current;
		current += prev;
		prev = tmp;

		count++;
	}
	printf("\n");
	return (0);
}
