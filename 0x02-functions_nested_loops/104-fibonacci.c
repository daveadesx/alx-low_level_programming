#include <stdio.h>

/**
 * main - print first 98 fibonacci sequence
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long prev, current, tmp;
	int count;

	prev = 1;
	current = 1;

	for (count = 0; count < 98; count++)
	{
		if (count != 0)
			printf(", ");
		printf("%lu", current);

		tmp =  current;
		current += prev;
		prev = tmp;

	}
	printf("\n");
	return (0);
}
