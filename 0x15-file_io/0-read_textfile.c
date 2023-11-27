#include "main.h"

/**
  *read_textfile - function that reads file and prints it to standard output
  *@filename: the name of the file
  *@letters: the number of letters printed
  *Return: number of letters prints, 0 if it fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dsc;
	char *buffer;
	ssize_t read_file, write_file;

	if (!filename)
	{
		return (0);
	}

	file_dsc = open(filename, O_RDONLY);

	if (file_dsc == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
	{
		close(file_dsc);
		return (0);
	}

	read_file = read(file_dsc, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	close(file_dsc);
	free(buffer);

	return (write_file);
}
