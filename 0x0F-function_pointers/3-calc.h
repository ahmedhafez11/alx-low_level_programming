#ifndef CALC_H
#define CALC_H
/**
 * struct op - struct op
 * @op: operator.
 * @f: function.
 */
typedef struct op
{
	char *op;
	int (*f)(int i, int j);
} op_t;

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int j, int j);
int (*get_op_func(char *s))(int, int);
#endif
