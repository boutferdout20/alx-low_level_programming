#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - write li bghit
 * @format: ecrire un list des argumemnts
 */
void print_all(const char * const format, ...)
{
int a = 0;
char *st, *p = "";
va_list la;
va_start(la, format);
if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
	printf("%s%c", p, va_arg(la, int));
	break;
case 'i':
	printf("%s%d", p, va_arg(la, int));
	break;
case 'f':
	printf("%s%f", p, va_arg(la, double));
	break;
case 's':
	st = va_arg(la, char*);
	if (!st)
	st = "(nil)";
	printf("%s%s", p, st);
	break;
default:
	a++;
	continue;
}
p = ", ";
a++;
}
}
printf("\n");
va_end(la);
}
