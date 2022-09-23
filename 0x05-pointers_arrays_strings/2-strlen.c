#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 *
 * Return: int
 */
int _strlen(char *s)
{
	int length;

	while (s[length])
		length++;

	return (length);
}
