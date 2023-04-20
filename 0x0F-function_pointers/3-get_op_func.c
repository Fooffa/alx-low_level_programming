#include "3-calc.h"
/**
*get_op_func -  selects the correct function to perform the operation
*Return: return a pointer to the function op_add
*@s: input as a string
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
	{"/", op_div}, {"%", op_mod}, {NULL, NULL}};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);

}
