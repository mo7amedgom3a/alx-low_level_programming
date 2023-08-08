#include "main.h"
/**
* create_file -  function that creates a file..
* @filename: file to create.
* @text_content: info to write into the file.
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t size;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		size = write(file, text_content, strlen(text_content));
		if (size == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
