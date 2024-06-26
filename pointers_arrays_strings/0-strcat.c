#include "main.h"
#include <stdio.h>

/**
 * _strcat - takes the source string src and appends it to the end of the destination string dest
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	
	for (j = 0; dest[j] != '\0'; j++);
	
	for (i = 0; src[i] != '\0'; i++);
	
	dest[j + i] = src[i];

	return (dest);
