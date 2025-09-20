
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes of s2
 * @s1: first string (treated as "" if NULL)
 * @s2: second string (treated as "" if NULL)
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new string (s1 + n bytes of s2), or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *res;
unsigned int len1 = 0, len2 = 0, i, j;
if (s1 != NULL)
while (s1[len1] != '\0')
len1++;
if (s2 != NULL)
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
res = malloc(sizeof(char) * (len1 + n + 1));
if (res == NULL)
return (NULL);
for (i = 0; i < len1; i++)
res[i] = s1[i];
for (j = 0; j < n; j++)
res[i + j] = s2[j];
res[len1 + n] = '\0';
return (res);
}
