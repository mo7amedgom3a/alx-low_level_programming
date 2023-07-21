#include "variadic_functions.h"
/**
 * is_char - prints an char
 * @separator: the string seprator
 * @list: argument pointer
 */
void is_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * is_int - prints an int
 * @separator: the string seprator
 * @list: argument pointer
 */
void is_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}
/**
 * is_float - prints an float
 * @separator: the string seprator
 * @list: argument pointer
 */
void is_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, float));
}
/**
 * is_string - prints an string
 * @separator: the string seprator
 * @list: argument pointer
 */
void is_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * print_all - prints anything(any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list list;
	format_struct arr[] = {
		{'c', is_char},
		{'i', is_int},
		{'f', is_float},
		{'s', is_string},
		{NULL, NULL}
	};
	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j].ch)
		{
			if (format[i] == arr[j].ch)
			{
				arr[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
