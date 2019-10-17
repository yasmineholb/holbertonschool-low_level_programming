#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **string_nconcat - Function
 *@s1: 
 *@s2:
 *@n:
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int t, k, m, j = 0, i = 0;
char *ch;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
t = j;
}
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
if (n < t)
{
while (s2[m] != s2[n+1])
{
ch[k] = s2[m];
m++;
k++;
}
}
else
{
while (s2[m] != '\0')
{
ch[k] = s2[m];
m++;
k++;
}
}
ch[k] = '\0';
return (ch);
}
