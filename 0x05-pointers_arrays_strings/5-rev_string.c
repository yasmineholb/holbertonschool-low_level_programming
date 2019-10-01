#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - function that returns length
*@s:pointer
*/
void rev_string(char *s)
{
int i, j = 0;
char ch[1000];
int m = 0;
while (s[m] != '\0')
{
m++;
}
for (i = (m - 1); i >= 0; i--)
{
*(ch + j) = *(s + i);
j++;
}
for (j = 0; j <= (m - 1); j++)
{
*(s + j) = *(ch + j);
}
}
