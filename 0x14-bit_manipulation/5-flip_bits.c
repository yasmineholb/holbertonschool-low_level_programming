#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 *clear_bit - fn
 *@n: param
 *@index: param
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
unsigned int j;
i = n ^ m;
while (i)
{
if (n & 1)
{
j++;
}
n >>=1;
}
 return (i); 
}
