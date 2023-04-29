#include "lists.h"
/**
 * free_listint - free
 * @head: 3la hassab
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
