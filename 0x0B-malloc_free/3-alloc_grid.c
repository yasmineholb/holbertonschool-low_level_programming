#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 ***alloc_grid- Function
 *@width: int
 *@height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
int j, m, i, k;
int **grid;
if (height <= 0 || width <= 0)
return (NULL);
grid = malloc(height * sizeof(int));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (k = 0; k < i; k++)
free(grid[k]);
free(grid);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (j = 0; j < width; j++)
grid[m][j] = 0;
}
return (grid);
}
