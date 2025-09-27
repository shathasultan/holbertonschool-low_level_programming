
#include "function_pointers.h"
/**
 * int_index - searches for an integer using a comparison function
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @cmp: pointer to comparison function
 *
 * Return: index of first element where cmp != 0, else -1
 *         if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
 for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
