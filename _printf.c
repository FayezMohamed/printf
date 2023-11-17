#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    	va_list ap;
    	int count = 0;

    	va_start(ap, format);

    	while (format && *format)
    	{
        	if (*format == '%')
        	{
            		format++;
            		if (*format == '\0')
            		{
                		break;
            		}

            		switch (*format)
            		{
                		case 'c':
                    			count += print_char(ap);
                    			break;
                		case 's':
                    			count += print_string(ap);
                    			break;
                		case 'd':
                		case 'i':
                    			count += print_int(ap);
                    			break;
				case 'D':
					count += print_dec(ap);
					break;
                		case '%':
                    			count += print_percent();
                    			break;
				case 'b':
					count += print_binary(ap);
					break;
                		default:
                    			_putchar('%');
                    			_putchar(*format);
                    			count += 2;
                    			break;
            		}
        	}
        	else
        	{
            		_putchar(*format);
            		count++;
        	}

        	format++;
    	}

    	va_end(ap);

    	return count;
}
