#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - funcion that searches an integer
 *
 * @array: first value
 * @size: function
 * @cmp: function
 *
 * Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int value = 0, i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value == 1)
			return (i);
	}
	return (-1);
}
