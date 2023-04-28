#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return subraction
 * @a: first number
 * @b: second number
 * Return: subraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return muliplication
 * @a: first number
 * @b: second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division
 * @a: first number
 * @b: second number
 * Return: division 
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return remainder
 * @a: The first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
