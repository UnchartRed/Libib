/*
** EPITECH PROJECT, 2021
** ib_cut_file
** File description:
** cuts a file name
*/

#include "../includes/ib.h"
#include <stdlib.h>

char *ib_cut_file(char const *str)
{
    char *copy;
    char *tmp = ib_revstr(str);
    int len = ib_strlen(str);
    int i = 0;

    for (; tmp[i] != '\0' && str[i] != '/'; i++);
    free(tmp);
    copy = malloc(sizeof(char) * (i + 1));
    for (len = len - i, i = 0; str[len + i] != '\0'; i++)
        copy[i] = str[len + i];
    copy[i] = '\0';
    return (copy);
}