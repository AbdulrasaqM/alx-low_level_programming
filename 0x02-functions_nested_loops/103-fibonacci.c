#include <stdio.h>

/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: void
 */

int main(void)
{
	unsigned long n, i, j, fibon, sums;

	i = sums = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		fibon = i + j;
		i = j;
		j = fibon;
		if (fibon % 2 == 0 && fibon < 4000000)
		{
			sums += fibon;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
