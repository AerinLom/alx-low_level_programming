#include "main.h"

/**
  *create_file - function that creates a file
  *@filename: name of file
  *@text_content: a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int file_descrip, num_letters, write_file;

	if (!filename)
	{
		return (-1);
	}

	file_descrip = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descrip == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (num_letters = 0; text_content[num_letters]; num_letters++)
	{
		write_file = write(file_descrip, text_content, num_letters);

		if (write_file == -1)
		{
			return (-1);
		}
	}
	close(file_descrip);
	return (1);
}
