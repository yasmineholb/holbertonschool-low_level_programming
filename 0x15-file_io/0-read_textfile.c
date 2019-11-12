#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t i, j, k;
char *buffer = NULL;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
i = open(filename, O_RDONLY);
if (i == -1)
return (free(buffer), 0);
j = read(i, buffer, letters);
if (j == -1)
return (free(buffer), 0);
buffer[letters] = '\0';
k = write(STDOUT_FILENO, buffer, j);
if (k == -1)
return (free(buffer), 0);
free(buffer);
close(i);
return (k);
}
