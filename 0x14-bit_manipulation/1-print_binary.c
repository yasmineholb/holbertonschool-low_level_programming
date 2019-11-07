#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 *print_binary - fn
 *@n: param
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar ((n & 1) + '0');
}
