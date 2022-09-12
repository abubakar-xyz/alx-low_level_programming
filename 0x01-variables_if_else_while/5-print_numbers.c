#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%i", num);
		num += 1;
	}

	printf("\n");
	return (0);
}
