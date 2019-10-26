#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - fn
 * @separator: char
 * @n: const
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
if (n == 0)
{
putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
printf("%d ", va_arg(ap, unsigned int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
putchar('\n');
va_end(ap);
}
