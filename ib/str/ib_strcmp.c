/*
** EPITECH PROJECT, 2021
** ib_strcmp
** File description:
** returns 1 if the two strings are identical else 0
*/

#include "../../includes/ib.h"

bool ib_strcmp(char const *s1, char const *s2)
{
    if (ib_strlen(s1) != ib_strlen(s2))
        return (false);
    for (int i = 0; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (false);
    return (true);
}