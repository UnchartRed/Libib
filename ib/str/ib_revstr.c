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
    int length = ib_strlen(str);
    char *res = malloc(sizeof(char) * length + 1);

    for (int i = 0; i < length; i++)
        res[i] = str[length - i - 1];
    res[length] = '\0';
    return (res);
}