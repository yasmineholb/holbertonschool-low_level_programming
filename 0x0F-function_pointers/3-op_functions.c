#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
/**
 * op_add - fn
 * @a: param
 * @b: param
 * Return: sum
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - fn
 * @a: param
 * @b: param
 * Return: sub
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - fn
 * @a: param
 * @b: param
 * Return: mul
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - fn
 * @a: param
 * @b: param
 * Return: div
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - fn
 * @a: param
 * @b: param
 * Return: mod
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
