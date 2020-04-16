#include "search_algos.h"
/**
*binary_search - fn
*@array: param
*@size: param
*@value: param
*Return: int
*/
int binary_search(int *array, size_t size, int value)
{
int m = 0;
size_t l = 0;
if (!array)
return (-1);
m = b_s(array, l, size, value);
return (m);
}
/**
*b_s - fn
*@array: param
*@l: param
*@size: param
*@value: param
*Return: int
*/
int b_s(int *array, size_t l, size_t size, int value)
{
size_t i, mid = 0;
if (size >= l)
{
mid = (l + size) / 2;
if (array[mid] == value)
{
printf("mid is %li", mid);
return (mid);
}
if (array[mid] > value)
{
for (i = 0; i < size; i++)
return (b_s(array, l, mid - 1, value));
}
for (i = 0; i < size; i++)
return (b_s(array, mid + 1, size - 1, value));
}
return (-1);
}
