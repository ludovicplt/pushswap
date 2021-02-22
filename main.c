/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-ludovic.peltier
** File description:
** main
*/

#include "my_print.h"
#include "my.h"
#include "my_linked.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_list(linked_t **list)
{
    linked_t *tmp = *list;

    while(tmp != NULL) {
        my_printf("%d ", tmp->number);
        tmp = tmp->next;
    }
    my_printf("\n");
}

int main(int argc, char **argv)
{
    int index = 1;
    linked_t *l_a = NULL;
    linked_t *l_b = NULL;
    data_t data;

    data.is_firt = 0;
    if (argc == 1) {
        my_printf("\n");
        return (0);
    } else {
        while (argv[index] != NULL) {
            make_link(&l_a, argv[index]);
            index++;
        }
        sort(&l_a, &l_b, &data);
    }
    my_printf("\n");
    return (0);
}