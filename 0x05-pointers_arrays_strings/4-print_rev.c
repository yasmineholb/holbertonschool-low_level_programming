#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev - function that returns length
*@s:pointer
*/
void print_rev(char *s)
{
int i = 0, j;
while (s[i] != '\0')
{
i++;
}
for (j = (i - 1); j >= 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
