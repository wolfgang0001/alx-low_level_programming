#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printing a name
 * @name: name to print
 * @f: pointer to the function that will print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
