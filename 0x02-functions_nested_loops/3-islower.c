#include "main.h"

/**
 * _islower() - function that checks for lowercase character
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
