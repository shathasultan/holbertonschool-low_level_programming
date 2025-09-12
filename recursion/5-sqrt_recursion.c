
#include "main.h"
/**
* _sqrt_helper - recursive helper to find natural square root
* @n: number to compute square root of
* @g: current guess
*
* Return: natural square root if it exists, otherwise -1
*/
static int _sqrt_helper(int n, int g)
{
if (g * g == n)
return (g);
if (g * g > n)
return (-1);
return (_sqrt_helper(n, g + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: input integer
*
* Return: natural square root of n; -1 if none or n < 0
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
