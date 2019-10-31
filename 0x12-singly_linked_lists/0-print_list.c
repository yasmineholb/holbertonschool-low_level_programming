#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 *@h: param
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t k = 0;
while (h !=  NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
k++;
}
return (k);
}

