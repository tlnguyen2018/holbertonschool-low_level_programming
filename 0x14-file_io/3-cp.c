#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void error_file_from(char *, char *);
void error_file_to(char *, char *);
void error_close(int, char *);

/**
 * copy_file - copies a file to another
 * @file_to: file to copy to
 * @file_from: file to copy from
 * Return: 0
 */
int copy_file(char *file_to, char *file_from)
{
	int to, from, wrt, err, red;
	char *size;


	size = malloc(sizeof(char) * 1024);
	if (!size)
		return (0);

	from = open(file_from, O_RDONLY);
	if (from == -1)
		error_file_from(file_from, size);

	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_file_to(file_to, size);

	red = read(from, size, 1024);

	do {
		if (red == -1)
			error_file_from(file_from, size);
		if (red == 0)
			break;
		wrt = write(to, size, red);
		if (wrt == -1)
			error_file_to(file_to, size);
		red = read(from, size, 1024);
	} while (red > 0);

	err = close(to);
	if (err == -1)
		error_close(to, size);
	err = close(from);
	if (err == -1)
		error_close(from, size);

	free(size);
	return (0);
}

/**
 * error_close - error procedure when issue with closing
 * @fd: integer where file is opened
 * @buf: buffer to free
 * Return: void
 */
void error_close(int fd, char *buf)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * error_file_from - error procedure when issue with file from
 * @file_from: name of file from
 * @buf: buffer to free
 * Return: void
 */
void error_file_from(char *file_from, char *buf)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * error_file_to - error procedure when file to cant be created
 * @file_to: name of file to
 * @buf: buffer to free
 * Return: void
 */
void error_file_to(char *file_to, char *buf)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}


/**
 * main - main of our program
 * @argc: number of arugments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[2], argv[1]);
	return (0);
}
