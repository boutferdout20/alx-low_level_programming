#include "lists.h"
/**
 * delete_nodeint_at_index - suprimer node
 * @head: pointeur
 * @index: index
 * Return: najeh 1 ou -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *cu = NULL;
unsigned int a = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (a < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
a++;
}
cu = tmp->next;
tmp->next = cu->next;
free(cu);
return (1);
}
