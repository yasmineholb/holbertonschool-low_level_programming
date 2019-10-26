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
char *c;
va_start(ap, n);
for (i = 0; i < n; i++)
{
c = va_arg(ap, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
putchar('\n');
va_end(ap);
}
