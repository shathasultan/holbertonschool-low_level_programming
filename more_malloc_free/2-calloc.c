#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated zero-initialized memory,
 *         or NULL if nmemb/size is 0, on overflow, or on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
size_t total;
unsigned char *p;
if (nmemb == 0 || size == 0)
return (NULL);
total = (size_t)nmemb * (size_t)size;
if (size != 0 && total / size != nmemb) /* overflow check */
return (NULL);
p = (unsigned char *)malloc(total);
if (p == NULL)
return (NULL);
for (i = 0; i < total; i++)
p[i] = 0;
return ((void *)p);
}
