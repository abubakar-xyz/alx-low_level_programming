#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value to swap
 * @b: value to swap
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
