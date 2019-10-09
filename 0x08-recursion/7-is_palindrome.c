#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - Function
 * @s: string to calculate length
 * Return: int
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - function
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (pal(s, len));
}

/**
 * pal - function
 * @s: string
 * @len: length
 * Return: int
 */

int pal(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
{
return (pal(s + 1, len - 2));
}
else
return (0);
}
