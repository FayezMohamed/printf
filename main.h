#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct
{
	char c;
	char *s;
} specifiers;

int _printf(const char *format, ...);
int _putchar(char c);


#endif
