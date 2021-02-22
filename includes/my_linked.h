/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-ludovic.peltier
** File description:
** my_linked
*/

#ifndef MY_LINKED_H_
#define MY_LINKED_H_

typedef struct linked {
    int number;
    struct linked *next;
}linked_t;

typedef struct data {
    int nb1;
    int nb2;
    int count;
    int is_firt;
} data_t;

void make_link(linked_t **list, char *nb);
void remove_head(linked_t **list);
void add_head(linked_t **list, int *nb);
int sort(linked_t **l_a, linked_t **l_b, data_t *data);
void get_value(linked_t **tmp1, linked_t **tmp2, int *nb1, int *nb2);
void print_list(linked_t **list);
void process_sort(data_t *data, linked_t **tmp1,
    linked_t **l_a, linked_t **l_b);
#endif /* !MY_LINKED_H_ */
