#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - Function
 * @haystack: string to search
 * @needle: string to find
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = haystack;
char *j = needle;
while (*j == *haystack && *j != '\0' && *haystack != '\0')
{
haystack++;
j++;
}
if (*j == '\0')
return (i);
haystack = i + 1;
}
return (NULL);
}
