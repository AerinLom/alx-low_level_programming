#include "main.h"

/**
  *error_file_handler - checks whether a file can open
  *@file_source: original file
  *@file_dest: where file needs to be copied
  *@argv: argument vector
  */

void error_file_handler(int file_source, int file_dest, char *argv[])
{
	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  *main - copies the content of a file to another file
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int file_source, file_dest, err_close;
	char buffer[1024];
	ssize_t num_chars, num_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_source = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file_handler(file_source, file_dest, argv);
	num_chars = 1024;

	while (num_chars == 1024)
	{
		num_chars = read(file_source, buffer, 1024);
		if (num_chars == -1)
			error_file_handler(-1, 0, argv);

		num_written = write(file_dest, buffer, num_chars);
		if (num_written == -1)
			error_file_handler(0, -1, argv);
	}
	err_close = close(file_source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}
	err_close = close(file_dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
	return (0);
}
