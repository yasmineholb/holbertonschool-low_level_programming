#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * *create_array - Function
 *@size: int
 *@c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *tab;
if (size == 0)
return(NULL);
tab = malloc(size * sizeof(char));
if (tab == NULL)
return (NULL);
while (i < size)
{
tab[i] = c;
i++;
}
return(tab);
}
