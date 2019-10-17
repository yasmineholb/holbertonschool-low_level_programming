#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **array_range - Function
 *@min: int
 *@max: max
 * Return: int
 */
int *array_range(int min, int max)
{
int i;
int *tab;
if (min > max)
return (NULL);
tab = malloc((max - min + 1) * sizeof(int));
if (tab == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
tab[i] = i;
}
return (tab);
}
