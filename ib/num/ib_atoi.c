/*
** EPITECH PROJECT, 2020
** ib_atoi
** File description:
** returns a number, sent to the function as a string
*/

int ib_atoi(char const *s)
{
    int number = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        number *= 10;
        number += s[i] - '0';
    }
    return (number);
}