#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_last_digit - description for this function
 *@n: parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int s;
s = n % 10;
if (s <= 0)
s = s * -1;
_putchar(s + '0');
return (s);
}
