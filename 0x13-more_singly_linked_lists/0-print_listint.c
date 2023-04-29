#include "lists.h"
/**
 * print_listint - ecrire tout les elements
 *@h: list
 * Return: chiffre de nodes
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
while (h)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
