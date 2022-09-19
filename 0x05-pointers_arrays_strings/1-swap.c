#include "main.h"

/**
 *swap_int - this swpas two integers 
 *@a,b - two pinters will updated with the opposite value
 *
 *Return void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
