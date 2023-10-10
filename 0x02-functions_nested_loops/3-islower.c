#include "main.h"
/**
  *_islower - function to check for lowercase
  *@c: character getting checked
  *Return: 1 for lowrcase or 0 for anything else
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
