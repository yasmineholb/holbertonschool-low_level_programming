#include "hash_tables.h"
/**
 *hash_table_create - fn to create hash
 *@size: the size
 *Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *h;
if (!size)
return (NULL);
h = malloc(sizeof(hash_node_t));
if (!h)
return (NULL);
h->size = size;
h->array = malloc(sizeof(hash_node_t) * size);
if (!h->array)
return (NULL);
return (h);
}
