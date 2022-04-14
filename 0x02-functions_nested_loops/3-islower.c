#include "main.h"

/**
 * main - check the code.
 * Description: A function that checks for lowercase character.
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

