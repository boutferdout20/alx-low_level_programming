#include "lists.h"
/**
 * sum_listint - calculateur
 * @head: premiere
 * Return: resultat
 */
int sum_listint(listint_t *head)
{
int c = 0;
listint_t *tmp = head;
while (tmp)
{
c += tmp->n;
tmp = tmp->next;
}
return (c);
}
