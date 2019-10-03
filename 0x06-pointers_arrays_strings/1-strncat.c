#include "holberton.h"
#include <stdio.h>
/**
 * *_strncat - function
 *@dest: pointer
 *@src: pointer
 *@n: integer
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}

