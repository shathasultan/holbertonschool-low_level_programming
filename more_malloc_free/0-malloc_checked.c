
#include "main.h"
#include <stdlib.h>

/**

 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 *         exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{

void *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
