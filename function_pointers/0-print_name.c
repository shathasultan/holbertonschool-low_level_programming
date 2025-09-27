
#include <stddef.h>
#include "function_pointers.h"
/**
* print_name - prints a name using a function pointer
* @name: string to print
* @f: pointer to a function that takes a char * and returns void
*
* If name or f is NULL, the function does nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

