#include "main.h"

/**
 * _islower - prints letters only in lowercase
 * @c: character that act as iterator
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
