#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print the numbers from the input to 98..
 * @n: Holds the integer for the function.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
printf(", ");
}
}
printf("\n");
}
