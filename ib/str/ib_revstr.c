/*
** EPITECH PROJECT, 2020
** ib_revstr
** File description:
** returns the reverse string of the one passed as a parameter
*/

#include <stdlib.h>
#include "../../includes/ib.h"

char *ib_revstr(char const *str)
{
    char *copy = malloc(sizeof(char) * ib_strlen(str));
    int length = ib_strlen(str);

    for (int i = 0; i < length; i++)
        copy[i] = str[length - i - 1];
    return (copy);
}