#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_strlen - function that returns length
*@s:pointer
*Return: int
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
