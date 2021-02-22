/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** say if a string contain only alphabetical character
*/

int is_num(char str);

int my_str_isnum(char const *str)
{
    int e = 0;
    int str_num = 1;

    while (str[e] != '\0' && str_num == 1) {
        if (is_num(str[e]) == 0) {

            str_num = 0;
        }
        e++;
    }
    if ( str_num == 1 || e == 0) {
        return (1);
    } else if ( str_num == 0 ) {
        return (0);
    }
    return (0);
}

int is_num(char str)
{
    if ('1' <= str && str <= '9') {
        return (1);
    } else {
        return (0);
    }
}