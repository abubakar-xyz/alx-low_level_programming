#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}

	putchar('\n');

	return (0);
}
