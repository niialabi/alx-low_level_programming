#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name func
 * @name: name to be printed
 * @f: function pointer
 *
 * Description: funt prints out name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
