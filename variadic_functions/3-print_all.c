
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
* print_all - prints anything based on format string
* @format: list of types of arguments passed
* c: char, i: integer, f: float, s: char *
*/
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *str;
char *separator = "";
va_start(ap, format);
if (format)
{
while (format[i])
{
if (format[i] == 'c')
printf("%s%c", separator, va_arg(ap, int));
if (format[i] == 'i')
printf("%s%d", separator, va_arg(ap, int));
if (format[i] == 'f')
printf("%s%f", separator, va_arg(ap, double));
if (format[i] == 's')
{
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
}
separator = ", ";
i++;
}
}
va_end(ap);
printf("\n");
}
