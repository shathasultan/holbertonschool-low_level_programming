#include <stdio.h>
#include "function_pointers.h"
/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
/**
* print_name_uppercase - prints a name in uppercase
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i;
printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
putchar(name[i] - 'a' + 'A');
else
putchar(name[i]);
i++;
}
putchar('\n');
}
/**
* print_name - executes a function on a given name
* @name: name of the person
* @f: pointer to function that takes a string and returns void
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
