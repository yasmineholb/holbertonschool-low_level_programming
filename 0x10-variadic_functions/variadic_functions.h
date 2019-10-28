#ifndef file
#define file
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void _printchar(va_list ap);
void _printstr(va_list ap);
void _printfloat(va_list ap);
void _printint(va_list ap);
typedef struct
{
char *type;
void (*fn)(va_list);
} type1;


#endif
