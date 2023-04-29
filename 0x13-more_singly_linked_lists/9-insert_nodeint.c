#include "lists.h"
/**
 * insert_nodeint_at_index - inserer neuf node
 * @head: pointeur
 * @idx: index
 * @n: data
 * Return: pointeur awla NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *neuf;
listint_t *tmp = *head;
neuf = malloc(sizeof(listint_t));
if (!neuf || !head)
return (NULL);
neuf->n = n;
neuf->next = NULL;
if (idx == 0)
{
neuf->next = *head;
*head = neuf;
return (neuf);
}
for (a = 0; tmp && a < idx; a++)
{
if (a == idx - 1)
{
neuf->next = tmp->next;
tmp->next = neuf;
return (neuf);
}
else
tmp = tmp->next;
}
return (NULL);
}
