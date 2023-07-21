#include "variadic_functions.h"
/**
 * print_all - prints out output with defined format
 * @format: list of acceptable formats
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
