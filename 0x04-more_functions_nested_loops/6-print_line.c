#include "holberton.h"
/**
* print_line - description for this function
* @n:parameter
* Return: Always 0 (Success)
*/
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i <= n; i++)
_putchar ('_');
else if (n <= 0)
_putchar('\n');
}
