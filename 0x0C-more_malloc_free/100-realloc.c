#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **_realloc - Function
 *@ptr: int
 *@old_size: int
 *@new_size: int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *c;
unsigned int i;
if (ptr == NULL)
{
c = malloc(new_size);
return (c);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
c = malloc(new_size);
if (c == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
c[i] = ((char *)ptr)[i];
free(ptr);
return (c);
}
