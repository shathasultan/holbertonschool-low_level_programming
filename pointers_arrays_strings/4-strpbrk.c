
#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to search
* @accept: the set of bytes to match
*
* Return: pointer to first matching byte in @s, or NULL if none
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
