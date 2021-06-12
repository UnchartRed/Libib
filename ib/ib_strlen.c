/*
** EPITECH PROJECT, 2020
** ib_strlen
** File description:
** returns the length of the string given as a parameter
*/

int ib_strlen(char const *str)
{
    int length = 0;

    for (; str[length] != '\0'; length++);
    return (length);
}