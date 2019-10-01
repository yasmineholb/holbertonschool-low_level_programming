#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_atoi - function that converts
*@s:pointer
*/
int _atoi(char *s)
{
int n, i, j;
j = 1;
i = 0;
n = 0;
while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
j = j * -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (n >= 0)
{
n = n * 10 - (s[i] - '0');
i++;
}
else
{
n = n * 10 - (s[i] - '0');
i++;
}
}
j = j * -1;
return (n * j);
}
