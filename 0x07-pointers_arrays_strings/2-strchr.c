#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - function
 * @s: parametre
 * @c: parametre
 * Return: char.
 */
char *_strchr(char *s, char c)
{
char *found = NULL;
while (*s != '\0')
{
if (*s == c)
{
found = s;
break;
}
s++;
}
return (found);
}
