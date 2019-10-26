#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - fn
 * @separator: char
 * @n: const
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d ", va_arg(ap, char));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
putchar('\n');

}
