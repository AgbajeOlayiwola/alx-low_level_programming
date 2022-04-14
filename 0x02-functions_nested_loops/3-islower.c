#include "main.h"

/**
 * main - check the code.
 * Description: A function that prints the alphabet, in lowercase
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

