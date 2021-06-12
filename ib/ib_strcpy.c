/*
** EPITECH PROJECT, 2021
** ib_strcpy
** File description:
** copy a string into an other
*/

void ib_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}