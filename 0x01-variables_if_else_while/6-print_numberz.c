#include <stdio.h>

/**
 * main - program that prints the numbers
 *
 * Return: 0
 */

int main()
{
	int num;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');
	
	return (0);
}
