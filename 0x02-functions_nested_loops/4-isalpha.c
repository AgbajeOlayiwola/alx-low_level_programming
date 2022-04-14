#include "main.h"

/**
 * main - check the code.
 * Description: A function that prints the alphabet, in lowercase
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
