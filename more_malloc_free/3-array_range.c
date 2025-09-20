
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of ints from min to max (inclusive)
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to newly allocated array ordered from min to max,
 *         or NULL if min > max, on overflow, or on allocation failure
 */
int *array_range(int min, int max)
{

int *arr;
unsigned int i;
unsigned long count;
if (min > max)
return (NULL);
/* number of elements = max - min + 1 (use wider type to avoid UB) */
count = (unsigned long)((long)max - (long)min) + 1UL;
/* overflow check for bytes = count * sizeof(int) */
if (count > (ULONG_MAX / sizeof(int)))
return (NULL);
arr = malloc(count * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < count; i++)
arr[i] = min + (int)i;
return (arr);
}
