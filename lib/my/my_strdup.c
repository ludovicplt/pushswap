/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** strdup
*/

#include <stdlib.h>
#include "my_print.h"

char *my_strdup(char const *str)
{
    char *strcpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    while (str[i] != '\0') {
        strcpy[i] = str[i];
        i++;
    }
    strcpy[i+1] = '\0';
    return (strcpy);
}