#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int u = 65;
	int l = 97;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
