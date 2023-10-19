#include "main.h"

/**
  **leet - function that encodes a string
  *@i: string input to be encoded
  *Return: the encoded string at pointer i
  */

char *leet(char *i)
{
	int r;
	int c;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (r = 0; i[r] != '\0'; r++)
	{
		for (c = 0; c < 10; c++)
		{
			if (i[r] == a1[c])
			{
				i[r] = a2[c];
			}
		}
	}
	return (i);
}
