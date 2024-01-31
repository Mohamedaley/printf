#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int str_handle(char *str);
int char_handle(char chr);
#endif
