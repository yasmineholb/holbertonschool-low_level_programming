#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - Function
 * @str: string to split
 * Return: char
 */
char **strtow(char *str)
{
char **tab;
int i, j, l, len, k, m;
l = k = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
 for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			l++;
	}
	if (l == 0)
		return (NULL);
	tab = malloc(((l + 1) * sizeof(char *)));
	for (i = 0; str[i] !=  '\0' && k < l; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;
			tab[k] = malloc((len + 1) * sizeof(char));
			if (tab[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				tab[k][m] = str[i];
		       tab[k++][m] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
