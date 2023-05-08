#include "main.h"
/**
 * create_file - created fille
 * @filename: pointeur
 * @text_content: pointeur string
 * Return: faild -1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int d, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0 ; text_content[len];)
len++;
}
d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(d, text_content, len);
if (d == -1 || w == -1)
return (-1);
close(d);
return (1);
}
