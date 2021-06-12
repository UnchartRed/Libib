/*
** EPITECH PROJECT, 2021
** ib_strdup
** File description:
** returns a copy of the string given as a parameter
*/

#include <stdlib.h>
#include "../includes/ib.h"

char *ib_strdup(char const *str)
{
    int length = ib_strlen(str);
    char *copy = malloc(sizeof(char) * (length + 1));

    for (int i = 0; i < length; i++)
        copy[i] = str[i];
    copy[length] = '\0';
    return (copy);
}