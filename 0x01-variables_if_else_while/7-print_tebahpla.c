#include <stdio.h>

/**
 * main - program that prints the alphabet in reverse
 *
 * Return: 0
 */

int main()
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	
	return (0);
}
