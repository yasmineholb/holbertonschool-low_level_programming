#include "holberton.h"
#include <stdio.h>
/**
 * *_strcmp - function
 *@s1: pointer
 *@s2: pointer
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}

