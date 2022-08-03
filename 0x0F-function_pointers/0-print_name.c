#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 * @name: pointer to the name printed
 * @f: pointer to call back a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
