#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: length of command line arguments
 *
 * @argv: double pointer to cli arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", ptr(a, b));

	return (0);
}
