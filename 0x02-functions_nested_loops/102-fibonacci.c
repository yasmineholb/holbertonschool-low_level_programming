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
long n = 1, n2, n1 = 1, f = 1;
for (n = 0; n < 49; n++)
{
printf("%li, ", n1);
n2 = n1 + f;
f = n1;
n1 = n2;
}
printf("%li\n", n1);
return (0);
}
