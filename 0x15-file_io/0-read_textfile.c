#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - lire text to print STDOUT
 * @filename: read text
 * @letters: les lettres
 * Return: 0 or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t f;
ssize_t e;
ssize_t y;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
b = malloc(sizeof(char) * letters);
y = write(f, b, letters);
e = write(STDOUT_FILENO, b, y);
free(b);
close(f);
return (e);
}
