#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - function
 *@s: pointer
 *Return: char
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' &&  s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
