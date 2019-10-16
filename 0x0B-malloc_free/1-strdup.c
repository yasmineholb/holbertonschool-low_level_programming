#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 **_strdup - Function
 *@str: char
 * Return: char
 */
char *_strdup(char *str)
{
unsigned int j, i = 0;
char *ch;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
ch = malloc((i *sizeof(char)) + 1);
if (ch == NULL)
{
return (NULL);
}
j = 0;
while (str[j] != '\0')
{
ch[j] = str[j];
j++;
ch[i] = '\0';
}
return (ch);
}

