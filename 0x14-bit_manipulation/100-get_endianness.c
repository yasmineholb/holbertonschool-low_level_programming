#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * get_endianness - fn
 * Return: 0
 */
int get_endianness(void)
{
unsigned int n;
char *s;
n = 1;
s = (char *)&n;
if (*s)
return (1);
else
return (0);
}
