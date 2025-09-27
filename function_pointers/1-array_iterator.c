
#include "function_pointers.h"
/**
* array_iterator - executes a function on each element of an array
* @array: pointer to the array
* @size: size of the array
* @action: pointer to the function to apply
*
* If array or action is NULL, the function does nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
