#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - function that multiplies two numbers
  *@argc: argument counter
  *@argv: argument vector
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc > 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
