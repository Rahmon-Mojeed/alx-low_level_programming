#include "main.h"

/**
 * print_alphabet -  function that prints the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
