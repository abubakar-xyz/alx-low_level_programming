#include "main.h"

/**
 * print_alphabet_x10 - prints all letters of the alphabets in lowercase10X
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		j++;
	}
}
