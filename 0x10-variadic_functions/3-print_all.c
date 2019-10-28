#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_char - fn
 *@ap: param
 * Return: void
 */

void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}

/**
 *print_integer - fn
 *@ap: param
 * Return: void
 */
void print_integer(va_list ap)
{
printf("%d", va_arg(ap, int));
}

/**
 *print_float - fn
 *@ap: param
 * Return: void
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

/**
 *print_string - fn
 *@ap: param
 * Return: void
 */

void print_string(va_list ap)
{
char *c;
c = va_arg(ap, char *);
c == NULL ? printf("(nil)") : printf("%s", c);
}

/**
 * print_all - fn
 * @format: const
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list arg1;
char *sep = "";
int i = 0, j;
type1 types[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string}
};
va_start(arg1, format);
while (format != NULL && format[i] != '\0')
{
j = 0;
while (j < 4 && (*(format + i) != *(types[j].type)))
j++;
if (j < 4)
{
printf("%s", sep);
types[j].fn(arg1);
sep = ", ";
}
i++;
}
printf("\n");
va_end(arg1);
}
