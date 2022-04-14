#include "main.h"
/**
 * main - check the code
* Description: A function that prints the alphabet, in lowercase
 * Return: void.
 */
void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
}
