/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatene to char
*/

int my_strlen(char *src);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int k = 0;

    k = my_strlen(dest);
    while (src[i] != '\0') {
        dest[i+k] = src [i];
        i++;
    }
    dest[k+i] = '\0';
    return (dest);
}