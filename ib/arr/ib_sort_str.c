/*
** EPITECH PROJECT, 2021
** ib_sort_str
** File description:
** returns a sorted string array given as a parameter
*/

#include <stdlib.h>
#include "../../includes/ib.h"

bool greater_str(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i] != '\0'; i++);
    if (s1[i] < s2[i])
        return (1);
    return (0);
}

char **ib_sort_str(char **array)
{
    const int size = ib_str_size(array);
    char **result = malloc(sizeof(char *) * size + 1);
    int score = 0;

    for (int i = 0; i < size; i++)
        result[i] = malloc(sizeof(array) / size);
    for (int i = 0; i < size; i++, score = 0) {
        for (int j = 0; j < size; j++) {
            if (i != j)
                score += greater_str(array[i], array[j]);
            if (ib_strcmp(array[i], array[j]) == 1 && i < j)
                score++;
        }
        result[size - score - 1] = array[i];
    }
    return (result);
}