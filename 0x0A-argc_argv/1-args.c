#include <stdio.h>
/**
 * main - Print number of argument
 *
 * @argc: Length of argv
 *
 * @argv: Arrays of strings of the program arguments
 *
 * Return: 0, Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
