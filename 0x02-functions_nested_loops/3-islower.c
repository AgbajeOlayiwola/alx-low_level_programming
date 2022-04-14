#include "main.h"

/**
 * _islower - Entry point
 * Description: A function that checks for lowercase character
 * @c: the integer value it receives
 * Return: 1 if TRUE 0 if FALSE
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

