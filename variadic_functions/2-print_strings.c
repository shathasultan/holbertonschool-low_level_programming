
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, separated by separator, then a newline
 * @separator: string to print between strings (can be NULL)
 * @n: number of strings passed to the function
 *
 * If separator is NULL, it is not printed.
 * If a string argument is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i + 1 < n && separator != NULL)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
