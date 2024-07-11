#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator- fun exc a fun give a array
 * @array: primer valor
 * @size: funcion
 * @action: fruncion
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
