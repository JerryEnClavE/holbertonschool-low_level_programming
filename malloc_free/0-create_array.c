#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 *
 * Return: A pointer to the array, or NULL if it fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)

		return (NULL);

	x = (char *)malloc(sizeof(char) * size);

	if (x == NULL)

	return (NULL);

	for (i = 0; x[i] == '\0'; i++)

		x[i] = c;

	return (x);
}
