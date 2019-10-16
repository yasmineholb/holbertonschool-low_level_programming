#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *argstostr - Function
 *@ac: arguement
 *@av: argument
 *Return: char
 */
char *argstostr(int ac, char **av)
{
char *cha, *ch;
int i, j, k;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++;
k++;
}
k++;
}
k++;
cha = malloc(k *sizeof(char));
if (cha == NULL)
return (NULL);
ch = cha;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
*cha = av[i][j];
j++;
cha++;
}
*cha = '\n';
cha++;
}
return (ch);
}
