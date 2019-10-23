#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc: param
 *@argv: param
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*fn)(int, int);
int i, j, k;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
i = atoi(argv[1]);
j = atoi(argv[3]);
fn = get_op_func(argv[2]);
if (fn == NULL)
{
printf("Error\n");
exit(99);
}
k = fn(i, j);
printf("%d\n", k);
return (0);
}
