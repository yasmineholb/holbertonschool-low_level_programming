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
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
