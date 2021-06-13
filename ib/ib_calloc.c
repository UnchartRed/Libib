/*
** EPITECH PROJECT, 2021
** ib_calloc
** File description:
** allocates empty memory
*/

#include "../includes/ib.h"
#include <stdlib.h>

void *ib_memset(void *res, int total, char fill)
{
    char *buff = res;

    for (; total; total--, buff++)
        *buff = fill;
    return (res);
}

void *ib_calloc(int total, int size)
{
    void *res = malloc(total * size);

    ib_memset(res, total, '\0');
    return (res);
}