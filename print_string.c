#include "main.h"
/**
 * _puts - a function to print string in C std
 * @str: the string passed to be printed
 * Return: the number of bytes printed;
 */
int _puts(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		len = 6;
		return (len);
	}
	while (*(str + len))
	{
		write(1, str + len, 1);
		len++;
	}
	return (len);
}
