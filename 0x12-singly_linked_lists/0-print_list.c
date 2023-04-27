#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - write the element
 * @h: pointeur de rwayss
 * Return: chiffre de nodes
 */
size_t print_list(const list_t *h)
{
size_t lin = 0;
while (h != NULL)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
lin++;
}
return (lin);
}
