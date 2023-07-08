#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, flag = 0;
	(void)argc;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			flag = 0;
			for (int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					flag = 1;
				else
				{
					flag = 0;
					break;

				}
				else
				{
					printf("Error\n");
					return (1);
				}

			}
			if (flag)
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
