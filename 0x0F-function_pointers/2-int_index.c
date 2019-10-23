#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - prints a name as is
 * @array: tab
 * @size: param
 * @cmp: fn
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
