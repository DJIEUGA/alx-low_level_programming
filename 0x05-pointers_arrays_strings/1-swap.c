#include <stdio.h>

/**
 * swap_int - swap the value of two integers.
 * @a - Integer param.
 * @b - Integer param.
 * Return : void (Nothing).
 */
void swap_int(int *a, int *b)
{
	int  tmp = *a;
	*a = *b;
	*b = tmp;
}
