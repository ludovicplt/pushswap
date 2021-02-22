/*
** EPITECH PROJECT, 2020
** my_ess.c
** File description:
** big s
*/

#include <stdarg.h>
#include "includes/my_print.h"

int convert_octal_ascii(int number)
{
    if (number <= 7) {
        my_putstr_str("00");
        convert(number, "01234567");
    } else if (number <= 64) {
        my_putstr_str("0");
        convert(number, "01234567");
    } else {
        convert(number, "01234567");
    }
}

int my_ess(va_list *ap)
{
    char *str = va_arg(*ap, char *);
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] <= 32 || str[i] >= 127) {
            my_putchar('\\');
            count++;
            convert_octal_ascii(str[i]);
            count += 3;
        } else {
            my_putchar(str[i]);
            count++;
        }
        i++;
    }
    return (count);
}