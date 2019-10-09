#include "holberton.h"
/**
* _sqrt_recursion -Function1
*@n: parametre
* sqrt -Function2 this is it the function
* Return: int
*/
int _sqrt_recursion(int n)
{
int i = 1;
return (_sqrt(n, i));
}

/**
*_sqrt - Function2 this is it the function.
*@n: parametre
*@i: new param
*Return: int
*/
int _sqrt(int n, int i)
{
if (n == (i * i))
return (i);
else if (n > (i * i))
return (_sqrt(n, i + 1));
else
return (-1);
}
