
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on a format string
 * @format: string of types: c (char), i (int), f (float), s (string)
 *
 * Only allowed:
 * - 2 if statements max
 * - 2 while loops max
 * - No else / else if
 * - Max 9 variables
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
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
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
printf("%s(nil)", sep);
else
printf("%s%s", sep, s);
}
sep = ", ";
}
i++;
}
va_end(ap);
printf("\n");
}
