#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **string_nconcat - Function
 *@s1: 
 *@s2:
 *@n:
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *tab;
if (size == 0 || nmemb == 0)
return (NULL);
tab = malloc(size * nmemb);
if (tab == NULL)
{
return (NULL);
}
for (i = 0;i < nmemb; i++)
{
tab[i] = 0;
}
return (tab);
}
