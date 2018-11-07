#include "holberton.h"

/**
 * read_textfile - entry point
 * Description: read file, and print out text
 * @filename: name of file
 * @letters: number of letters
 * Return: 0 if error, or printed number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int name;
	int red;
	int wrt;
	char *size;

	if (filename = NULL || letters == 0)
		return (0);

	name = open(filename, O_RDONLY);
	if (name < 0)
		return (0);

	size = malloc(sizeof(char) * letters);
	if (size == NULL)
	{
		close(name);
		return (0);
	}
	red = read(name, size, letters);
	close(name);

	if (red < 0)
	{
		free(size);
		return (0);
	}
	wrt = write(STDOUT_FILENO, name, red);
	if (wrt <= 0)
	{
		free(size);
		return (0);
	}
	free(size);
	return (wrt);
}
