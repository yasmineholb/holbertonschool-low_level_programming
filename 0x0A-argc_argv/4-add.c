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
int res = 0;
int i;
if (argc < 1)
printf "%d\n", 0);
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
