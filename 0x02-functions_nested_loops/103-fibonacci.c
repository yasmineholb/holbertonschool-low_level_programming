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
long res, n1 = 1, n2 = 2, f = 2;
while (1)
{
res = n1 + n2;
if (res > 4000000)
break;
if (res % 2 == 0)
f = f + res;
n1 = n2;
n2 = res;
}
printf("%ld\n", f);
return (0);
}
