#include "main.h"

/**
 * print_last_digit - returns last digit of a int
 * @l: integer argument
 *
 * Return: last digit of a number
 */

int print_last_digit(int l)
{
	int last_digit;

	while (1)
	{
		last_digit = l;
		if (l == 0)
		{
			_putchar(last_digit);
			break;
		}
                l /= 10;
	}
}
