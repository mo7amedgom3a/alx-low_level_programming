#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Length of @argv
 *
 * @argv: Array of strings of the arguments of this program
 *
 * Return: 0, Success or 1 fail
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
