/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-ludovic.peltier
** File description:
** sort
*/

#include <unistd.h>
#include "my_print.h"
#include "my.h"
#include "my_linked.h"

int nbsort(linked_t **list)
{
    int nb = 0;
    linked_t *tmp = *list;
    int nb1 = 0;
    int nb2 = 0;

    while (tmp->next != NULL) {
        nb1 = tmp->number;
        tmp = tmp->next;
        nb2 = tmp->number;
        if (nb1 > nb2) {
            nb++;
        }
    }
    return (nb);
}

void empty_list(linked_t **l_a, linked_t **l_b, data_t *data)
{
    linked_t *tmp = *l_b;
    int nb = 0;

    while (tmp != NULL) {
        nb = tmp->number;
        (data->is_firt == 0) ? write(1, "pa", 2) : write(1, " pa", 3);
        add_head(l_a, &nb);
        remove_head(l_b);
        *l_b = tmp->next;
        tmp = tmp->next;
    }
}

int sort(linked_t **l_a, linked_t **l_b, data_t *data)
{
    linked_t *tmp1 = *l_a;
    linked_t *tmp2 = *l_a;

    data->count = nbsort(l_a);
    if (data->count != 0) {
        while (data->count != 0) {
            data->nb1 = tmp1->number;
            tmp2 = tmp2->next;
            data->nb2 = tmp2->number;
            process_sort(data, &tmp1, l_a, l_b);
        }
        empty_list(l_a, l_b, data);
        sort(l_a, l_b, data);
    }
    return (0);
}
























/*
void sort(linked_t **l_a, linked_t **l_b)
{
    int count = nbsort(l_a);
    linked_t *tmp1 = *l_a;
    linked_t *tmp2 = *l_a;
    int nb1 = 0;
    int nb2 = 0;

    if (count != 0) {
        while (count != 0) {
            nb1 = tmp1->number;
            tmp2 = tmp2->next;
            nb2 = tmp2->number;
            if (nb1 > nb2) {
                swap(&*l_a, nb1, nb2);
                push_b(&*l_a, &*l_b, nb2);
                count--;
            } else {
                tmp1 = tmp1->next;
                push_b(&*l_a, &*l_b, nb1);
            }
        }
        empty_list(&*l_a, &*l_b);
        sort(&*l_a, &*l_b);
    }
}
*/