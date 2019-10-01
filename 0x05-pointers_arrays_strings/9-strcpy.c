#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
**_strcpy - function
*@dest: pointer
*@src: pointer
*Return: char
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;
while (src[i])
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}

