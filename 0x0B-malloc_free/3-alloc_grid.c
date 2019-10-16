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
int **tab;
if (height <= 0 || width <= 0)
return (NULL);
tab = malloc(height * sizeof(int));
if (tab == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
tab[i] = malloc(width * sizeof(int));
if (tab[i] == NULL)
{
for (k = 0; k < i; k++)
free(tab[k]);
free(tab);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (j = 0; j < width; j++)
tab[m][j] = 0;
}
return (tab);
}
