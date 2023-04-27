#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ajouter neuf node a the end
 * @head: double de pointeur
 * @str: ligne
 * Return: adresses de new elem or NULL ou cas ou de failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp = *head;
unsigned int ln = 0;
while (str[ln])
ln++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = ln;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
