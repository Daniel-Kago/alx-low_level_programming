#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: int data pointer type
 * @b: int data pointer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
