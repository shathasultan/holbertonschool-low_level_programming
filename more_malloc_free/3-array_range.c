#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of ints from min to max (inclusive)
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to new array ordered from min to max,
 *         or NULL if min > max or on allocation failure
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
