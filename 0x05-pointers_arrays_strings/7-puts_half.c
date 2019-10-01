#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*puts_half - function that returns length
*@str:pointer
*/
void puts_half(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
for (j = (i / 2) + 1; j < i; j++)
_putchar(*(str + j));
}
else
{
for (j = i / 2; j < i; j++)
_putchar(*(str + j));
}
_putchar('\n');
}
