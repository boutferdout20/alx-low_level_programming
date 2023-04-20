#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - write many function
 * @separator: separe les chiffres
 * @n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int a;
va_start(p, n);
for (a = 0; a < n; a++)
{
printf("%d", va_arg(p, int));
if (a < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(p);
printf("\n");
}
