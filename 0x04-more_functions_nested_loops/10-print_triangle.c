#include "holberton.h"
/**
 * print_triangle - function
 * @size: triangle height
 */
void print_triangle(int size)
{
int i, j;
j = size;
if (size <= 0)
_putchar('\n');
while (size > 0)
{
for (i = 0; i < j; i++)
_putchar((i < size - 1) ? ' ' : '#');
_putchar('\n');
size--;
}
}
