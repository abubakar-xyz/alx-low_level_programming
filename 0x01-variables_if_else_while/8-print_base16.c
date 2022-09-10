#include <stdio.h>

/**
 * main - program that prints the alphabet in reverse
 *
 * Return: 0
 */

int main()
{
	int num;
	char alp;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			for (alp = 'a'; alp <= 'f'; alp++)
			{
				putchar(alp);
			}
		}
	}

    return (0);
}
