#include "main.h"
/**
 * _putchar - function to print characters
 * @ch: character to be printed
 * Return: the number of bytes printed
 */
int _putchar(char ch)
{
	if (ch != '\0')
	{
		(write(1, &ch, 1));
		return (1);
	}
	else
		return (0);
}
