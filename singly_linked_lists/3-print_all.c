
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
* print_all - prints anything based on format string
* @format: string with format specifiers: c (char), i (int),
* f (float), s (string). Any other char is ignored.
*
* Description: If a string argument is NULL, prints (nil) instead.
* Each printed value is separated by ", " except the last one.
* Prints a new line at the end.
*/
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *s;
char *sep = "";
va_start(ap, format);
while (format && format[i])
{
if (format[i] == 'c')
printf("%s%c", sep, va_arg(ap, int));
if (format[i] == 'i')
printf("%s%d", sep, va_arg(ap, int));
if (format[i] == 'f')
printf("%s%f", sep, va_arg(ap, double));
if (format[i] == 's')
{
s = va_arg(ap, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
}
sep = ", ";
i++;
}
va_end(ap);
printf("\n");
}
