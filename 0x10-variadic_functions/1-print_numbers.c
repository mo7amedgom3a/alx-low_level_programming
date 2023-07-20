#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
			printf("%d%s", va_arg(list, int), separator);
		else
			printf("%d", va_arg(list, int), separator);
	}
	va_end(list);
	printf("\n");

}
