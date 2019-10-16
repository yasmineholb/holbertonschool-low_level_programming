#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 **str_concat- Function
 *@s1: char
 *@s2: char 
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
unsigned int j, i = 0;
char *ch;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
ch = malloc((i * sizeof(char)) + 1);
j = 0;
while (str[j] != '\0')
{
ch[j] = str[j];
j++;
ch[i] = '\0';
}
return(ch);
}

