#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *create_file - fn
 *@filename: param
 *@text_content: param
 *Return: int
 */
int create_file(const char *filename, char *text_content)
{
register int i, j, k;
k = 0;
if (filename == NULL)
return (-1);
i = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (i == -1)
return (-1);
if (text_content)
{
while (text_content[k])
k++;
j = write(i, text_content, k);
if (j == -1)
return (-1);
}
close(i);
return (1);
}
