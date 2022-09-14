#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: integer
 * Return: 0
 */

int _abs(int r)
{
	if (r < 0)
		return ((r + 2 * -r));
	else
		return (r);
}
