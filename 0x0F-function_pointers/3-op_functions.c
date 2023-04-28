#include "3-calc.h"

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);

/**
 * op_add - Returns the sum of two numbers.
 * @i: first number
 * @j: second number
 * Return: sum
 */
int op_add(int i, int j)
{
	return (i + j);
}
/**
 * op_sub - return subraction
 * @i: first number
 * @j: second number
 * Return: subraction
 */
int op_sub(int i, int j)
{
	return (i - j);
}
/**
 * op_mul - return muliplication
 * @i: first number
 * @j: second number
 * Return: multiplication
 */
int op_mul(int i, int j)
{
	return (i * j);
}
/**
 * op_div - return division
 * @i: first number
 * @j: second number
 * Return: division 
 */
int op_div(int i, int j)
{
	return (i / j);
}
/**
 * op_mod - return remainder
 * @i: The first number
 * @j: second number
 * Return: remainder
 */
int op_mod(int i, int j)
{
	return (i % j);
}
