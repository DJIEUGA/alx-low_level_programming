#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse order.
 * @s : pointer to char param.
 * Return - Void.
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(*s + 1);
		printf("%c", *s);
	}

	printf("%\n");
}
