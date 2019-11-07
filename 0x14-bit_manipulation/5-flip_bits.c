#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 *flip_bits - fn
 *@n: param
 *@m: param
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
unsigned int j;
i = n ^ m;
j = 0;
while (i > 0)
{
if (n & 1)
j++;
i >>= 1;
}
return (j); 
}
