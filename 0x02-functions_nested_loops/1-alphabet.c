#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
char C;

for (C = 97; C <= 122; C++)
{
_putchar(C);
}
_putchar('\n');
}

