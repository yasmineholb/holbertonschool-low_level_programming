#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - function that returns length
*@str:pointer
*/
void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j = j + 2)
{
_putchar(*(str + j));
}
_putchar('\n');
}

