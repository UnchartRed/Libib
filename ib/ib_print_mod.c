/*
** EPITECH PROJECT, 2021
** ib_print_mod
** File description:
** print modules for ib_print
*/

#include <unistd.h>
#include "../includes/ib.h"

void put_c(va_list *list)
{
    char c = (char) va_arg(*list, int);

    write(1, &c, 1);
}

void put_s(va_list *list)
{
    char *str = va_arg(*list, char *);

    ib_putstr(str);
}

void put_i(va_list *list)
{
    int num = va_arg(*list, int);

    ib_putnbr(num);
}