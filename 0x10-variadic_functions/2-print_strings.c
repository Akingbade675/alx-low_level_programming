#include "variadic_functions.h"

/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);

		if (!c) /* if c is null */
			printf("(nil)");
		else
			printf("%s", c);

		/* check if separator is not null and if this is not the last iteration */
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
