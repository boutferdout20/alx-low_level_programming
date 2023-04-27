#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "lists.h"
/**
 * add_node - add new node
 * @head: pointeur
 * @str: string
 * Return: adresse to the new node, if failed equal NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node_new;
char *str_dup;
int ln = 0;
if (str == NULL)
return (NULL);
node_new = malloc(sizeof(list_t));
if (node_new == NULL)
return (NULL);
str_dup = strdup(str);
if (str_dup == NULL)
{
free(node_new);
return (NULL);
}
while (str[ln])
ln++;
node_new->str = str_dup;
node_new->len = ln;
node_new->next = *head;
*head = node_new;
return (node_new);
}
