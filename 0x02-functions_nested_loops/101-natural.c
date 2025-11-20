#include <stdio.h>

/**
 * main - sum of all multiples (natural num) of 3 or 5 till 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5) == 0)
			sum += i;

	}
	printf("%d\n", sum);
	return (0);
}

