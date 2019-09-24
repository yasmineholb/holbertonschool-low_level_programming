#include "holberton.h"
/**
 * _islower - description for this function
 *@c: parameter
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
_putchar('1');
else
_putchar('0');
return(0);
}
