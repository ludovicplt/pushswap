/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** print string
*/

#include <stdarg.h>

#include <unistd.h>

void my_putchar(char c);

int my_putstr_str(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
        count++;
    }
    return (count);
}