#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int _strlen(const char *str);
int print_percent(void);
int print_int(va_list ap);
int print_dec(va_list ap);
int print_binary(va_list ap);
int print_octal(va_list ap);
int print_lower_hex(va_list ap);
int print_upper_hex(va_list ap);
int print_unsigned(va_list ap);

#endif
