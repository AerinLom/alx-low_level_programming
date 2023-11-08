#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
  *op_add - function that adds 2 integers
  *@a: first integer
  *@b: second integer
  *Return: addition of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function that subtracts 2 integers
  *@a: first integer
  *@b: second integer
  *Return: subtraction of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function that multiplies 2 integers
  *@a: first integer
  *@b: second integer
  @Return: multiplication of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function that divides 2 integers
  *@a: first integer
  *@b: second integer
  *Return: division of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - function that conducts modulus
  *@a: first integer
  *@b: second integer
  *Return: mod of a and b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
