#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - function.
 *@h: param
 *Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *m;
size_t i = 0;
for (m = h; m != NULL; m = m->next)
{
printf("%d\n", m->n);
i++;
}
return (i);
}
