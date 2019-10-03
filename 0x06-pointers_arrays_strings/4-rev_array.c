#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - function
 *@a: pointer
 *@n: pointer
 *Return: always0
 */
void reverse_array(int *a, int n)
{
int i, j;
int b[100];
i = n - 1;
j = 0;
while ((i >= 0) && (j <= n - 1))
{
b[j] = a[i];
i--;
j++;
}
for (i = 0; i < n; i++)
{
a[i] = b[i];
}
}
