#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - fn
 *@head: param
 *@str: param
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *m, *n;
int i;
if (str == NULL)
{
return (NULL);
}
m = malloc(sizeof(list_t));
if (m == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;
n = *head;
m->len = i;
m->str = strdup(str);
m->next = NULL;
if (*head == NULL)
{
*head = m;
return (m);
}
while (n->next != NULL)
{
n = n->next;
}
n->next = m;
return (m);
}
