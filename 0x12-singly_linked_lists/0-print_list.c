#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - fn
 *@h: param
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
const list_t *ch;
int o;
o = 0;
ch = h;
while (ch != NULL)
{
printf("[%d] %s\n", ch->len, ch->str);
ch = ch->next;
o++;
}
return (o);
}
