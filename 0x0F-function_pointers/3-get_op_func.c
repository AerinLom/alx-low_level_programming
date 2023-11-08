#include "3-calc.h"
#include <stdlib.h>

/**
  *get_op_func - Chooses the function
  *@s:The operator argument
  *Return: pointer to the chosen function
  */

int (*get_op_func(char *s))(int, int)
{
	op_t oper[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}
	};
	int c = 0;

	while (oper[c].op != NULL && *(oper[c].op) != *s)
		c++;
	return (oper[c].f);
}
