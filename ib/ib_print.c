/*
** EPITECH PROJECT, 2020
** ib_print
** File description:
** prints given arguments
*/

#include <unistd.h>
#include "../includes/ib.h"

void put_c(va_list *list);
void put_s(va_list *list);
void put_i(va_list *list);

int get_print_flag(const char *flag)
{
    static char const *flags = "cis\0";

    if (!flag++)
        return (-1);
    for (int i = 0; flags[i]; i++)
        if (*flag == flags[i])
            return (i);
    return (-1);
}

void ib_print(const char *format, ...)
{
    void (*Print[3]) (va_list *) =  \
    {put_c, put_i, put_s};
    int flag = 0;
    va_list ap;

    va_start(ap, format);
    while (*format) {
        flag = (*format == '%') ? (get_print_flag(format++)) : (-1);
        if (flag >= 0)
            (*Print[flag])(&ap);
        else
            write(1, &*format, 1);
        format++;
    }
    va_end(ap);
}
