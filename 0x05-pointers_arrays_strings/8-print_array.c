#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_array - function that returns length
*@a: pointer
*@n: pointer
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
printf(", ");
}
printf("\n");
}
