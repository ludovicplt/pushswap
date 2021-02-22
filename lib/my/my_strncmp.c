/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** lol
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int e = 0;
    while ( s1[e] != '\0' && s2[e] != '\0' && s1[e] == s2[e] && e <= n) {
        e++;
    }
    return (s1[e] - s2[e]);
}