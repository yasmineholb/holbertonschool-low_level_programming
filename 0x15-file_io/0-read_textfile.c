#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - fn
 * @filename: param
 * @letters: param
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t i, j = 0, k = 0;
char *f;
if (filename == NULL)
return (0);
f = malloc(sizeof(char) * letters);
if (f == NULL)
return (0);
i = -1;
i = open(filename, O_RDONLY);
if (i < 0)
{
free(f);
return (0);
}
j = read(i, \0f, letters);
if (j < 0)
{
free(f);
return (0);
}
while (f && f[k])
k++;
j = write(STDOUT_FILENO, f, k);
free(f);
close(i);
if (j < 0)
return (0);
return ((ssize_t)j);
}
