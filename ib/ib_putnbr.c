/*
** EPITECH PROJECT, 2020
** ib_putnbr
** File description:
** displays the number given as a parameter
*/

#include <unistd.h>

void ib_putnbr(int nb)
{
    int rest = 0;
    char c = '0';

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * - 1;
    }
    rest = nb % 10;
    nb = nb / 10;
    if (nb > 0)
        ib_putnbr(nb);
    c += rest;
    write(1, &c, 1);
}