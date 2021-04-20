/*
** EPITECH PROJECT, 2021
** ib_puterr
** File description:
** displays the error given as an argument
*/

#include <unistd.h>
#include "../../includes/ib.h"

int ib_puterr(char const *error, int val)
{
    int len = ib_strlen(error);

    write(2, error, len);
    return (val);
}