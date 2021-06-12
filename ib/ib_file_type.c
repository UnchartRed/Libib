/*
** EPITECH PROJECT, 2021
** ib_file_type
** File description:
** checks if the input is a coorect file type
*/

#include "../includes/ib.h"
#include <stdlib.h>

bool ib_file_type(char const *file, char const *type)
{
    char *t_file = ib_revstr(file);
    char *t_type = ib_revstr(type);
    bool res = true;

    if (!ib_strcon(t_file, t_type))
        res = false;
    free(t_file);
    free(t_type);
    return res;
}