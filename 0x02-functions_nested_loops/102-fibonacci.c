#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: void.
 */
int main(void)
{
	unsigned long n, i, j, fibon;

	i = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		fibon = i + j;
		i = j;
		j = fibon;
		printf("%lu", fibon);
		if (n == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
