#include <stdio.h>
/**
 * main - Prints Alphabet
 *
 * Description: Prints alphabet in lowercase.
 * It's neccesary  strcpy for copy de char array
 * Return: Return 1 for letters, 0 otherwise
 */
int main(void)
{
int n, j, result;
j = 1;
result = 0;
n = 1024;
for (j = 0 ; j  < n ; j++)
{
if (j % 3 == 0 || j % 5 == 0)
{
result += j;
}
}
printf("%i\n", result);
return (0);
}
