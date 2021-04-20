/*
** EPITECH PROJECT, 2021
** ib_str_size
** File description:
** returns the number of elements in a string array
*/

#include <stddef.h>

int ib_str_size(char **array)
{
    int elements = 0;

    for (; array[elements] != NULL; elements++);
    return (elements);
}