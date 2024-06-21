#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c1;
	int c;

	c = 0;

	while (c < 10)
	{
		for (c1 = 'a'; c1 <= 'z'; c1++)
		{
			_putchar(c1);
		}
	_putchar('\n');
	c++;
	}
}
