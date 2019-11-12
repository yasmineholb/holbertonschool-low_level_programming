#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - fn
 * @filename: param
 * @text_content: param
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int m, n, k;
if (!filename)
return (-1);
m = open(filename, O_RDWR | O_APPEND);
if (m == -1)
return (-1);
if (text_content == NULL)
return (1);
n = 0;
while (text_content[n] != '\0')
n++;
k = write(m, text_content, n);
if (k == -1)
{
return (-1);
}
return (1);
}
