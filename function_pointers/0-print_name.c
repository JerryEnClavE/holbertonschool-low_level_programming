#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funcion que printea un nombre
 * @name: primer valor
 * @f: funcion
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
