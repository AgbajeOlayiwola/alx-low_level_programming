#include "main.h"

/**
 * main - check the code
 * 
 * Description: Uses the main header file, that brings in the _putchar
 *  funtction.
 * Return: Always 0.
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
