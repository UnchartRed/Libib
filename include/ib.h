/*
** EPITECH PROJECT, 2021
** ib
** File description:
** ib function prototypes
*/

#ifndef IB_H
#define IB_H

#include <stdbool.h>

//       LIST
char **ib_rev_str_arr(char **array);
char **ib_sort_str(char **array);

int *ib_rev_int_arr(int *array, int size);
int *ib_sort_int(int *array, int size);

int ib_str_size(char **array);

//       STRING
char *ib_revstr(char const *str);
char *ib_strcpy(char const *str);

int ib_strlen(char const *str);

bool ib_strcmp(char const *s1, char const *s2);

//       NUMBER
char *ib_itoa(int num);

int ib_atoi(char const *str);

bool ib_intcmp(int e1, int e2);

//       PRINT
void ib_putstr(char const *str);
void ib_putnbr(int nb);

int ib_puterr(char const *error, int val);
//       MISCELLANEOUS

#endif