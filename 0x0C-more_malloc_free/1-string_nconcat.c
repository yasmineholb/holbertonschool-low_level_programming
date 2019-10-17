#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - Function
 *@s1: char
 *@s2: char
 *@n: int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ch;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
ch = malloc(sizeof(char) * (i + n + 1));
if (ch == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
ch[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
ch[i] = s2[j];
i++, j++;
}
ch[i] = '\0';
return (ch);
}
