#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *flip_bits - fn
 *@n: param
 *@m: param
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int k = 0;
n = n ^ m;
while (n > 0)
{
if (n & 1)
k++;
n >>= 1;
}
return (k);
}
