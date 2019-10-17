#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **_realloc - Function
 *@min: int 
 *@max: max
 * Return: int
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
return (ptr);
ptr = realloc (ptr, new_size)
if (new_size == 0) && (ptr != NULL)
free(ptr);
return (NULL);
if ptr == NULL
return (malloc(new_size))

free(ptr);
}
