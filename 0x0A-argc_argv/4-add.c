#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - function
 *@argc: argument
 *@argv: argument
 *Return: int
 */
int main(int argc, char **argv)
{
int sum, i, n;
char *p;
sum = 0;
if (argc > 1)
{
for (i = 1; argv[i]; i++)
{
n = strtol(argv[i], &p, 10);
if (!*p)
sum += n;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}
