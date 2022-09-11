#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main()
{
	int num;
	while (num < 10)
	{
		printf("%i", num);
		num += 1;
	}
	return (0);
}
