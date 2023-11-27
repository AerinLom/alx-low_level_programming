#include "main.h"

/**
  *append_text_to_file - appends text at the end of a file
  *@filename: name of file
  *@text_content: NULL terminated string to add at end of file
  *Return: Return 1 if the file exists and -1 if failed
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_description, num_letters, write_result;

	if (!filename)
	{
		return (-1);
	}

	file_description = open(filename, O_WRONLY | O_APPEND);

	if (file_description == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		write_result = write(file_description, text_content, num_letters);

		if (write_result == -1)
		{
			close(file_description);
			return (-1);
		}
	}

	close(file_description);
	return (1);
}
