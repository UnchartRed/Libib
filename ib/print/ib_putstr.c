/*
** EPITECH PROJECT, 2020
** ib_putstr
** File description:
** displays the string given as a parameter
*/

#include <unistd.h>
#include "../../includes/ib.h"

void ib_putstr(char const *str)
{
    int len = ib_strlen(str);

    write(1, str, len);
}