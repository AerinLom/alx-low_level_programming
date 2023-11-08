#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  *main - prints answers to simple calculations
  *@argc: count of arguments
  *@argv:vector of arguments
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' && num2 == 0) || (*c == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(num1, num2));
	return (0);
}
