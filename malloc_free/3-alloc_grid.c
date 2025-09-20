
#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array initialized to 0,
 *         or NULL on failure or if width/height <= 0
 */
int **alloc_grid(int width, int height)
{

int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (i--)
free(grid[i]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
