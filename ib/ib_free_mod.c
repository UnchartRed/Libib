/*
** EPITECH PROJECT, 2021
** ib_free_mod
** File description:
** free modules for ib_free
*/

#include <stdlib.h>
#include "../includes/ib.h"

void free_arr(va_list *list)
{
    char **arr = va_arg(*list, char **);

    for (int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}

void free_str(va_list *list)
{
    char *str = va_arg(*list, char *);

    free(str);
}

void free_int(va_list *list)
{
    int *num = va_arg(*list, int *);

    free(num);
}

void free_dob(va_list *list)
{
    double *num = va_arg(*list, double *);

    free(num);
}