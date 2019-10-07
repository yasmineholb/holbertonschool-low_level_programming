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
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
