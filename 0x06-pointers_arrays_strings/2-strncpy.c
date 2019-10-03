#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - function
 *@dest: pointer
 *@src: pointer
 *@n: longueur
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
if (n <= 0)
{
return (dest);
}
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i++] = '\0';
}
return (dest);
}
