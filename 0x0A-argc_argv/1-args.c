#include "holberton.h"
#include <stdio.h>
/**
 *main - function
 *@argc: argument
 *@argv: argument
 *Return: int
 */
int main(int argc, char **argv)
{
if (**argv != '\0')
printf("%d\n", argc - 1);
return (0);
}
