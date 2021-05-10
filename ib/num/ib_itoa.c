/*
** EPITECH PROJECT, 2020
** ib_itoa
** File description:
** transforms an int into a char *
*/

#include <stdlib.h>
#include "../../includes/ib.h"

char *ib_itoa(int num)
{
    bool negative = (num < 0);
    char *result;
    int i = 0;

    num *= (negative)?(-1):(1);
    for (int cpy = num; cpy > 0; cpy /= 10, i++);
    result = malloc(sizeof(char) * (i + negative + 1));
    for (i = 0; num > 0; num /= 10, i++)
        result[i] = num % 10 + '0';
    result[i] = '-';
    result[i + negative] = '\0';
    return (result = ib_revstr(result));
}