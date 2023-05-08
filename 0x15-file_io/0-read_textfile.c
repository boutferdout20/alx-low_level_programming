#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - lire text to print STDOUT
 * @filename: read text
 * @letters: les lettres
 * Return: 0 or faild or number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t n, nw;
char *b;
if (!filename)
return (0);
f = open(filename, O_RDONLY);
return (0);
b = malloc(sizeof(char) * (letters));
if (!b)
return (0);
n = read(f, b, letters);
nw = write(STDOUT_FILENO, b, n);
close(f);
free(b);
return (nw);
}
