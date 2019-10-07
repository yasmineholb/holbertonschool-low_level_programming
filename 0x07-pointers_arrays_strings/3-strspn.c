#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function
 * @s: parametre
 * @accept: parametre
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
