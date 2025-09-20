
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a given char
 * @size: size of the array
 * @c: character to initialize each element with
 *
 * Return: pointer to the allocated array,
 *         or NULL if size == 0 or if allocation fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
