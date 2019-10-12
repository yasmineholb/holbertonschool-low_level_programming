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
int res = 1;
int i;
if (argc < 2)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
res *= atoi(argv[i]);
printf("%d\n", res);
return (0);
}
