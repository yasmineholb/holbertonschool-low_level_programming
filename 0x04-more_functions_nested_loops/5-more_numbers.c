#include "holberton.h"
/**
* more_numbers - description for this function
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
int i, j, n;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
n = i % 10;
if
(i >= 10)
_putchar('0' + 1);
_putchar('0' + n);
}
_putchar('\n');
}
}
