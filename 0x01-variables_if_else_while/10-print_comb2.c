#include<stdio.h>
/**
 * main - Entry point
 * Return
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int s;
for (x = 0 ; x <= 9 ; x++)
{
for (s = 1 ; s <= 9 ; s++)
{
putchar('0' + x);
putchar('0' + s);
if (x != 9 || s != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
