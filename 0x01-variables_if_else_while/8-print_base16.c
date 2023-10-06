#include <stdio.h>
/**
  *main- Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a = 97;
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
