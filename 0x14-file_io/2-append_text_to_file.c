#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * append_text_to_file - entry point
 * Description: append the text at the end
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int wrt;
	int size;


	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != '\0')
	{
		for (size = 0; *(text_content + size) != '\0';)
			size++;
		wrt = write(file, text_content, size);
		if (wrt == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
