#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Length of @argv
 *
 * @argv: Array of strings of the arguments of this program
 *
 * Return: 0, Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
