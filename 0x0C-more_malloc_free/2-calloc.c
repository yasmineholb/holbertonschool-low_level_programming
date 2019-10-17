#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **_calloc - Function
 *@nmemb: int
 *@size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
void *ch;
if (nmemb <= 0 || size <= 0)
return (NULL);
p = malloc(nmemb * size);
ch = p;
if (p == 0)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (ch);
}
