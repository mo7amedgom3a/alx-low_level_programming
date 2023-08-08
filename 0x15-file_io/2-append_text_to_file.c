#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: file to append.
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t length, is_writng;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = fopen(filename, "r");
		if (file != NULL)
		{
			fclose(file);
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	length = strlen(text_content);
	is_writng = fwrite(text_content, sizeof(char), length, file);
	if (is_writng != length)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
