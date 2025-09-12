
/**
* File: 3-factorial.c
* Desc: Implements factorial using recursion.
*/
#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: input integer
*
* Return: factorial of n, or -1 if n is negative
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
