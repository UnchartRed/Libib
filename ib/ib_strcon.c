/*
** EPITECH PROJECT, 2021
** ib_strcon
** File description:
** does the first string contain the second one
*/

#include "../includes/ib.h"

bool ib_strcon(char const *s1, char const *s2)
{
    if (ib_strlen(s1) < ib_strlen(s2))
        return (false);
    for (int i = 0; s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (false);
    return (true);
}