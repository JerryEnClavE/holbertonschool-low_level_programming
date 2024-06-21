#include "main.h"

/**
 * _isalpha - cheks for alphabetics character
 *
 * @c: The character to be cheked
 *
 * Return: 1 for alphabetic character or 0 for nyting else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
