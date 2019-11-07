#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - fn
 *@b: param
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int cal = 0;
if (!b)
return (0);
x = 0;
while (b[x] != '\0')
{
if (b[x] != '0' && b[x] != '1')
return (0);
x++;
}
for (x = 0; b[x] != '\0'; x++)
{
cal <<= 1;
if (b[x] == '1')
cal += 1;
}
return (cal);
}
