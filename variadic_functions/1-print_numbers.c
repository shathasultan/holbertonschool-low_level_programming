
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers, separated by separator, then a newline
* @separator: string to print between numbers (can be NULL)
* @n: number of integers passed to the function
*
* If separator is NULL, it is not printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int value;
va_start(ap, n);
for (i = 0; i < n; i++)
{
value = va_arg(ap, int);
if (i && separator != NULL)
printf("%s", separator);
printf("%d", value);
}
va_end(ap);
printf("\n");
}
