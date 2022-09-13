#include <stdio.h>

/**
 * Main - Entry point
 * print a string
 *
 * Return: 0 on success
 * */
 
 int main (void)
{
	char *a;
	int i;

	a = '_putchar';
	for (i =0; i<=8; i++)
	{
		putchar (a[i]);
	}
	putchar ('\n');
	return 0;
}
