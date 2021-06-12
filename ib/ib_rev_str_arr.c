/*
** EPITECH PROJECT, 2021
** ib_rev_str_arr
** File description:
** returns a reverted str array given as a parameter
*/

#include <stdlib.h>
#include "../includes/ib.h"

char **ib_rev_str_arr(char **array)
{
    int size = ib_arr_size(array);
    char **result = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i < size; i++)
        result[i] = ib_strdup(array[size - i - 1]);
    result[size] = NULL;
    return (result);
}