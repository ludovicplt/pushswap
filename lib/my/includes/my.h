/*
** EPITECH PROJECT, 2020
** my_lib.h
** File description:
** declacre all my lib
*/

#ifndef MY_LIB_H_
#define MY_LIB_H_
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_isprime(int nb);
int my_put_nbr(int nb);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp( char const *s1, char const *s2);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha (char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_upcase(char *str);
char *my_strdup(char const *str);

#endif /* MY_LIB_H_ */
