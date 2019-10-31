#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - fn
 *@h: param
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
size_t k;
k = 0;
while (h != NULL)
{
k++;
h = h->next;
}
return (k);
}
