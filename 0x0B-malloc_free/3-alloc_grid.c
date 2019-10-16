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
int i, j, s, m;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (m = 0; m < i; m++)
free(grid[m]);
free(grid);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (s = 0; s < width; s++)
grid[j][s] = 0;
}
return (grid);
}
