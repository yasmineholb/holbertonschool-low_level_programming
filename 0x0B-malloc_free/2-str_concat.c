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
unsigned int k, m, j = 0, i = 0;
char *ch;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0' && s2[j] != '\0')
i++;
j++;
ch = malloc(((i + j + 1) * sizeof(char)));
if (ch == NULL)
{
return (NULL);
}
m = 0;
k = 0;
while (s1[k] != '\0')
{
ch[k] = s1[k];
k++;
}
while (s2[m] != '\0')
{
ch[k] = s2[m];
m++;
k++;
}
ch[k] = '\0';
return (ch);
}
