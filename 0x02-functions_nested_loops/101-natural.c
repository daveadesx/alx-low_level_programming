#include <stdio.h>

/**
 * main - sum of all multiples (natural num) of 3 or 5 till 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long int sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5) == 0)
			sum += i;

		printf("%ld\n", sum);
		return (0);
	}
}

