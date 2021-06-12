/*
** EPITECH PROJECT, 2021
** ib_free_arr
** File description:
** free double arrays
*/

#include <stdlib.h>

int ib_free_arr(char **array, int val)
{
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
    return (val);
}