#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - ecrire des lignes
 * @separator: separer les lignes
 * @n: chiffre
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list m;
unsigned int r;
char *k;
va_start(m, n);
for (r = 0; r < n; r++)
{
k = va_arg(m, char*);
if (k == NULL)
	printf("(nil)");
else
	printf("%s", k);
if (r != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(m);
}
