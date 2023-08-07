#include "main.h"
/**
* read_textfile - function that reads a text file and prints it
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size;
	int file;
	char *arr;

	if (!filename)
		return (0);
	arr = malloc(sizeof(char) * letters + 1);
	if (arr == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(arr);
		return (0);
	}
	size = read(file, arr, sizeof(char) * letters);
	if (size == -1)
	{
		free(arr);
		close(file);
		return (0);
	}
	size = write(STDOUT_FILENO, arr, size);
	if (size == -1)
	{
		free(arr);
		close(file);
		return (0);
	}
	free(arr);
	close(file);
	return (size);
}
