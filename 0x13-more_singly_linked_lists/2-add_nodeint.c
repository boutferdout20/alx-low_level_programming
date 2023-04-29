#include "lists.h"
/**
 * add_nodeint - ajouter neuf node
 * @head: pointeur
 * @n:data
 * Return: pointeur neuf node awla NULL ila kan failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neuf;
neuf = malloc(sizeof(listint_t));
if (!neuf)
return (NULL);
neuf->n = n;
neuf->next = *head;
*head = neuf;
return (neuf);
}
