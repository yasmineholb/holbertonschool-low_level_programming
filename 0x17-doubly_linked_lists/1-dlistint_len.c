#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - function.
 *@h: param
 *Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
