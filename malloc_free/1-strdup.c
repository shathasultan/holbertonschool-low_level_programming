

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string into newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or on failure
 */
char *_strdup(char *str)
{

char *dup;

unsigned int len = 0, i;

if (str == NULL)

return (NULL);

while (str[len] != '\0')

len++;

dup = malloc((len + 1) * sizeof(char));

if (dup == NULL)

return (NULL);

for (i = 0; i < len; i++)

dup[i] = str[i];

dup[len] = '\0';

return (dup);

}

ChatGPT can make mistakes. Check important info.
