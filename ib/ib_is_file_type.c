/*
** EPITECH PROJECT, 2021
** ib_is_file_type
** File description:
** checks if the input is a coorect file type
*/

#include "../includes/ib.h"

bool ib_is_file(char const *file, char const *type)
{
    if (!ib_strcon(ib_revstr(file), ib_revstr(type)))
        return (false);
    return (true);
}