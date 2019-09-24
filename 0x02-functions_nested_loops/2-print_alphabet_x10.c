#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char i ;
int j=0 ;
while (j<10)
{
for (i='a' ; i<='z' ; i++)
_putchar(i);
_putchar('\n');
j++;
}
}
