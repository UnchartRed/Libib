/*
** EPITECH PROJECT, 2021
** is_num
** File description:
** tells if a a strign is a number
*/

#include "../includes/ib.h"

bool ib_is_num(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (false);
    return (true);
}