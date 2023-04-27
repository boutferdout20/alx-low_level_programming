#include <stdlib.h>
#include "lists.h"
/**
 * list_len - list elements a linked list
 * @h: le pointeur
 * Return: return
 */
size_t list_len(const list_t *h)
{
size_t tmp = 0;
while (h != NULL)
{
tmp++;
h = h->next;
}
return (tmp);
}
