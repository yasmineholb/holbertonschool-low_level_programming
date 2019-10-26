#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fn
 * @n: const
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
int result = 0;
va_list args;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (unsigned int i = 0; i < n; ++i)
{
result += va_arg(args, int);
}
va_end(args);
return (result);
}
