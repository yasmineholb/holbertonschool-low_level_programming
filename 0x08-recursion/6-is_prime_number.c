#include "holberton.h"
/**
* is_prime_number -Function11
*@n: parametree
* Return: int
*/
int is_prime_number(int n)
{
if (n > 1)
return (prime(n, 2));
else if (n < 0)
return (0);
return (0);
}

/**
*prime - Function2 this is it the function.
*@n: parametre
*@m: new param
*Return: int
*/
int prime(int n, int m)
{
if (n % m == 0 && m != (n / 2))
{
return (0);
}
else if (m >= (n / 2))
{
return (1);
}
else
{
return (prime(n, m + 1));
}
}
