#include "main.h"
/**
* read_textfile - function that reads a text file and prints it
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *arr;
	ssize_t is_read, is_write;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	arr = (char *)malloc(letters + 1);
	if (arr == NULL)
	{
		fclose(file);
		return (0);
	}

	is_read = fread(arr, sizeof(char), letters, file);
	if (is_read <= 0)
	{
		fclose(file);
		free(arr);
		return (0);
	}
	arr[is_read] = '\0';

	is_write = fwrite(arr, sizeof(char), is_read, stdout);
	if (is_read != is_write)
	{
		fclose(file);
		free(arr);
		return (0);
	}

	fclose(file);
	free(arr);
	return (is_write);
}
