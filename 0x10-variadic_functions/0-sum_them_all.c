#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - fn
 * @n: const
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i;
unsigned int j = 0;
if (n == 0)
{
return (0);
}
va_start(arg, n);
for (i = 0; i < n; i++)
j += va_arg(arg, int);
va_end(arg);
return (j);
}
