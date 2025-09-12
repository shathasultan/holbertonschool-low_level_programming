
#include "main.h"
/**
* prime_helper - recursively checks if n has a divisor >= 2
* @n: number to test
* @i: current divisor to try
*
* Return: 1 if prime, 0 otherwise
*/
int prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (prime_helper(n, i + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
* @n: input integer
*
* Return: 1 if prime, otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
return (prime_helper(n, 2));
}
