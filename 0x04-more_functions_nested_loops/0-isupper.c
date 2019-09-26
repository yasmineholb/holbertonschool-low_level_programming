#include "holberton.h"
/**
* _isupper - description for this function
* @c: parameter
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return(1);
else
return(0);
}
