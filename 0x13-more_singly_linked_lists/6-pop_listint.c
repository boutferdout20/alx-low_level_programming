#include "lists.h"
/**
 * pop_listint - suprimmer le tete
 * @head: ponteur
 * Return: supprimer awla empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int chi;
if (!head || !*head)
return (0);
chi = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (chi);
}
