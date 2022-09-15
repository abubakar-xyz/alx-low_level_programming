#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - program prints out info about integer n
 * @n: integer to be checked
 * Return: 0
 */
void positive_or_negative(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
