#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
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
return;
}
for (i = 0; i < n; i++)
{
printf("%d ", va_arg(ap, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
putchar('\n');

}
