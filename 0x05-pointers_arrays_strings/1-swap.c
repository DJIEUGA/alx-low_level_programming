#include <stdio.h>

/**
 * swap_int - swap the value of two integers.
 * @b: Integer param.
 * @a: Integer param.
 * Return : void (Nothing).
 */
void swap_int(int *a, int *b)
{
	int  tmp = *a;
	*a = *b;
	*b = tmp;
}
