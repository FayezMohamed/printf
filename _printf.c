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
                break; /* handle trailing '%' as you wish */
            }

            switch (*format)
            {
                case 'c':
                    count += print_char(ap);
                    break;
                case 's':
                    count += print_string(ap);
                    break;
                case '%':
                    count += print_percent();
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

int main(void)
{
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Character:[%c]\n", 'H');

    return 0;
}
}
