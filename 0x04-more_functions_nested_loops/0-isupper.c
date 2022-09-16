#include "main.h"

/**
 *main - check code for Uppercase
 *
 *Return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
