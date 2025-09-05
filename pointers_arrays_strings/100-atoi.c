#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: pointer to the string
*
* Return: the converted integer, or 0 if no numbers found
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int res = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == '-' && !started)
sign = -sign;
else if (s[i] == '+' && !started)
{
/* ignore */
}
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
break;
}
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 - (s[i] - '0');
i++;
}
if (!started)
return (0);
if (sign == 1)
return (-res);
return (res);
}
