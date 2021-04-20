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
    char *result = malloc(sizeof(char) * 12);
    bool negative = false;
    int i = 0;

    if (num < 0) {
        num *= -1;
        negative = true;
    }
    for (; num > 0; num /= 10, i++)
        result[i] = num % 10 + '0';
    if (negative)
        result[i] = '-';
    result = ib_revstr(result);
    return (result);
}