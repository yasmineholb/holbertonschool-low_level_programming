#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - function
 *@dest: pointer
 *@src: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i=0;
while (i < n && *(src + i))
{
dest[i] = src[i];
i++;
}
return (dest);	       
}
