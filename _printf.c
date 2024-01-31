#include "main.h"

/**
 * _printf - The printf function clone
 * @format: a constant pointer to a cha r
 * Return: the size of the printed args
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	va_start(ap, format);
	if (format == NULL)
	{
		len += _puts(NULL);
		return (6);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += _putchar('%');
			else if (*format == 'c')
				len += char_handle(va_arg(ap, int));
			else if (*format == 's')
				len += str_handle(va_arg(ap, char*));
			else
			{
				len += _putchar('%');
				len += _putchar(*format);
			}
		}
		else
			len += _putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}
