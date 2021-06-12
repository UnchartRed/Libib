/*
** EPITECH PROJECT, 2021
** Libib
** File description:
** ib_str_to_word_array
*/

#include "../includes/ib.h"
#include <stdlib.h>

bool ib_cmp(char const c, char const *str)
{
    for (int i = 0; str[i]; i++)
        if (c == str[i])
        return (true);
    return (false);
}

static int ib_count_words(char const *str, char const *sep)
{
    int res = (!ib_cmp(str[0], sep));

    for (int i = 0; str[i]; i++)
        res += (ib_cmp(str[i], sep));
    return (res);
}

char **ib_str_to_arr(char const *str, char const *sep)
{
    int words = ib_count_words(str, sep);
    char **res = malloc(sizeof(char *) * (words + 1));
    int i = 0;
    int p = 0;

    for (int j = 0; j < words; j++)
        res[j] = malloc(sizeof(char) * ib_strlen(str));
    for (int k = 0; i < words; i++) {
        k += (ib_cmp(str[k], sep));
        for (p = 0; str[k] && !ib_cmp(str[k], sep); p++, k++)
            res[i][p] = str[k];
        res[i][p] = '\0';
    }
    res[i] = NULL;
    return (res);
}