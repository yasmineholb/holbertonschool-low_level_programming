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
  int i, j = 0, k = 0;
char *temp_b;
if (filename == NULL)
return (0);
temp_b = malloc(sizeof(char) * letters);
if (!temp_b)
return (0);
 i = -1;
i = open(filename, O_RDONLY);
if (i < 0)
{
free(temp_b);
return (0);
}
j = read(i, temp_b, letters);
if (j < 0)
{
free(temp_b);
return (0);
}
while (temp_b && temp_b[k])
k++;
j = write(STDOUT_FILENO, temp_b, k);
free(temp_b);
close(i);
if (j < 0)
return (0);
return ((ssize_t)j);
}
