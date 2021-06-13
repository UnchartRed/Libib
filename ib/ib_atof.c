/*
** EPITECH PROJECT, 2021
** ib_atof
** File description:
** returns a float, given to the function as a string
*/

#include <stdio.h>

float ib_atof(char const *str)
{
    float result = 0;
    int i = (str[0] == '-');

    for (; str[i]; i++) {
        i += (str[i] == '.');
        result *= 10;
        result += str[i] - '0';
    }
    for (i = 0; str[i] != '.' && str[i]; i++);
    for (i = i + (str[i] == '.'); str[i]; i++)
        result /= 10;
    return (result *= (str[0] == '-')?(-1):(1));
}
