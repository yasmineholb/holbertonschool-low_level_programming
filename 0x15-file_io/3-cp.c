#include "holberton.h"
/**
*main - fn of it
*@argc: arg
*@argv: argv
*Return: int
*/
int main(int argc, char *argv[])
{
ssize_t num, v;
char b[1024];
int m, n, j, k, c;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
j = 0;
while (j < 1024)
{
b[j] = 0;
j++;
}
m = open(argv[1], O_RDONLY);
num = read(m, b, 1024);
if (m == -1 || num == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
n = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (n == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
while (num)
{
v = write(n, b, num);
if (v == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
num = read(m, b, 1024);
if (num == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
c = close(n);
k = close(m);
if (k == -1 || c == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m), exit(100);
return (0);
}
