#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
