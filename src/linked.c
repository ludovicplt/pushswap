/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-ludovic.peltier
** File description:
** linked
*/

#include "my_linked.h"
#include "my.h"
#include "my_print.h"
#include <stdlib.h>
#include <unistd.h>

void make_link(linked_t **list, char *nb)
{
    linked_t *node = malloc(sizeof(linked_t));
    linked_t *tmp = *list;

    node->number = my_getnbr(nb);
    node->next = NULL;
    if (*list == NULL) {
        *list = node;
    } else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}

void remove_head(linked_t **list)
{
    (*list) = (*list)->next;
}

void add_head(linked_t **list, int *nb)
{
    linked_t *node = malloc(sizeof(linked_t));

    if ((*list) == NULL) {
        node->number = *nb;
        node->next = NULL;
        *(list) = node;
    } else {
        node->number = *nb;
        node->next = *(list);
        *(list) = node;
    }
}

void get_value(linked_t **tmp1, linked_t **tmp2, int *nb1, int *nb2)
{
    *nb1 = (*tmp1)->number;
    (*tmp2) = (*tmp2)->next;
    *nb2 = (*tmp2)->number;
}

void process_sort(data_t *data, linked_t **tmp1, linked_t **l_a, linked_t **l_b)
{
    if (data->nb1 > data->nb2) {
        (*tmp1)->number = data->nb2;
        *tmp1 = (*tmp1)->next;
        (*tmp1)->number = data->nb1;
        (data->is_firt == 0) ? write(1, "sa", 2) : write(1, " sa", 3);
        (data->is_firt)++;
        remove_head(l_a);
        add_head(l_b, &data->nb2);
        (data->is_firt == 0) ? write(1, "pb", 2) : write(1, " pb", 3);
        (data->count)--;
    } else {
        *tmp1 = (*tmp1)->next;
        remove_head(l_a);
        add_head(l_b, &data->nb1);
        (data->is_firt == 0) ? write(1, "pb", 2) : write(1, " pb", 3);
        (data->is_firt)++;
    }
}