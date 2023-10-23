#include "main.h"

/**
  *print_chessboard - function that prints a chessboard
  *@a: input array
  *Return: Always 0 (Success)
  */
void print_chessboard(char (*a)[8])
{
	int p, r;

	for (p = 0; p < 8; p++)
	{
		for (r = 0; r < 8; r++)
		_putchar(a[p][r]);
		_putchar('\n');
	}
}
