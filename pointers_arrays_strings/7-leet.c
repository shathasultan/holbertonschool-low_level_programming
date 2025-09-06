#include "main.h"
/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: pointer to the encoded string
*
* Mapping:
* aA -> 4, eE -> 3, oO -> 0, tT -> 7, lL -> 1
*/
char *leet(char *s)
{
int i = 0, j;
char in[] = "aAeEoOtTlL";
char out[] = "4433007711";
while (s[i] != '\0')
{
for (j = 0; in[j] != '\0'; j++)
{
if (s[i] == in[j]) /* ← واحد if فقط */
{
s[i] = out[j];
break;
}
}
i++;
}
return (s);
}
