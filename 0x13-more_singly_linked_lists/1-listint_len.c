#include "lists.h"
/**
 * listint_len - retour de chiffre
 * @h: linked liststs
 * Return: chiffre de nodes
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h)
{
c++;
h = h->next;
}
return (c);
}
