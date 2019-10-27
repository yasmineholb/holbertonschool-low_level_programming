#include <stdio.h>
#include <stdlib.h>

/**
 * main - fn
 * @argc: param
 * @argv: param
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
char *pt;
int i, j;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
pt = (char *)&main;
j = atoi(argv[1]);
i = 0;
while (i < j - 1)
{
printf("%02hhx ", pt[i]);
i++;
}
printf("%02hhx\n", pt[i]);
return (0);
}
