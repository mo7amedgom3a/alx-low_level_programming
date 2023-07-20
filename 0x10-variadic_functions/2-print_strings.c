#include "variadic_functions.h"
/**
 * print_strings - prints numbers
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; n != 0 && i < (n - 1); i++)
	{
		str = va_arg(list, char *);
		if (separator)
			printf("%s%s", str ? str : "(nil)", separator);
		else
			printf("%s", str ? str : "(nil)");
	}
	if (!n)
		printf("\n");
	else
	{
		str = va_arg(list, char *);
		printf("%s\n", str ? str : "(nil)");
	}
	va_end(list);
}
