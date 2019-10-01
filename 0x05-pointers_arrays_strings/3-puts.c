#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_puts - function that returns length
*@str:pointer
*Return: int
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
