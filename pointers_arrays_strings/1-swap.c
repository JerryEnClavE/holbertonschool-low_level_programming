#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * @a: The first integer to be swapped.
 *
 * @b: The second integer to be swapped.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
