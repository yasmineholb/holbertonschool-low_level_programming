#include "holberton.h"
/**
 * read_textfile - fn
 * @filename: param
 * @letters: param
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int i, j = 0, k = 0;
char *f;
if (filename == NULL)
return (0);
f = malloc(sizeof(char) * letters);
if (f == NULL)
return (0);
i = open(filename, O_RDONLY);
if (i == -1)
return (0);
j = read(i, f, letters);
if (j == -1)
return (0);
while (f[k] != '\0')
k++;
j = write(STDOUT_FILENO, f, k);
if (j == -1)
return (0);
close(i);
return (j);
}
