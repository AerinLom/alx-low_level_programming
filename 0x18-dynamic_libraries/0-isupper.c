#include "main.h"
/**
  *_isupper - function to check for uppercase
  *@c: value being checked
  *Return: 1 if uppercase, otherwise 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
