#include "main.h"

/**
 * main - check the code.
 * Description: A function that prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 0; num < 10; ++num)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
