#include <stdio.h>
/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0, flag = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				sum += atoi(argv[i]);
			else
			{
				flag = 1;
				break;
			}
		}
		printf("%d\n", sum);
	}
	if (flag)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
