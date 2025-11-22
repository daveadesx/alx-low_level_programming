#include <stdio.h>

#define BASE 1000000000

/**
 * main - print first 98 fibonacci sequence
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long prev, current, tmp;
	int count, carry;

	unsigned long p0 = 1, p1 = 0, p2 = 0;
	unsigned long c0 = 1, c1 = 0, c2 = 0;
	unsigned long t0 = 0, t1 = 0, t2 = 0;

	for (count = 0; count < 98; count++)
	{
		if (count != 0)
			printf(", ");
		if (c2 > 0)
			printf("%lu%09lu%09lu", c2, c1, c0);
		else if (c1 > 0)
			printf("%lu%09lu", c1, c0);
		else
			printf("%lu", c0);

		t0 = c0, t1 = c1, t2 = c2;
		/* calculate the nex value: c = c + p */
		c0 += p0;
		carry = c0 / BASE;
		c0  %= BASE;

		c1 += (carry + p1);
		carry = c1 /  BASE;
		c1 %= BASE;

		c2 += (carry + p2);
		p0 = t0, p1 = t1, p2 = t2;

	}
	printf("\n");
	return (0);
}
