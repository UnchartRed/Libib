/*
** EPITECH PROJECT, 2021
** ib_free
** File description:
** free multiple elements
*/

#include "../includes/ib.h"

void free_arr(va_list *list);
void free_str(va_list *list);
void free_int(va_list *list);
void free_dob(va_list *list);

int get_free_flag(const char *flag)
{
    static char const *flags = "saif\0";

    for (int i = 0; flags[i]; i++)
        if (*flag == flags[i])
            return (i);
    return (0);
}

void ib_free(const char *format, ...)
{
    void (*Free[4]) (va_list *) =  \
    {free_str, free_arr, free_int, free_dob};
    va_list ap;

    va_start(ap, format);
    while (*format)
        (*Free[get_free_flag(format++)])(&ap);
    va_end(ap);
}