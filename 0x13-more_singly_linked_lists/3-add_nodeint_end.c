#include "lists.h"
/**
 * add_nodeint_end - ajouter neuf node
 * @head: pointeur
 * @n: data
 * Return: pointeur l new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *neuf;
listint_t *tmp = *head;
neuf = malloc(sizeof(listint_t));
if (!neuf)
return (NULL);
neuf->n = n;
neuf->next = NULL;
if (*head == NULL)
{
*head = neuf;
return (neuf);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = neuf;
return (neuf);
}
