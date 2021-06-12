/*
** EPITECH PROJECT, 2021
** ib
** File description:
** ib function prototypes
*/

#ifndef IB_H
#define IB_H

#include <stdbool.h>
#include <stdio.h>

char **ib_str_to_arr(char const *str, char const *sep);
bool ib_file_type(char const *file, char const *type);
char **ib_read_fd(FILE *file, char const *path);
bool ib_strcon(char const *s1, char const *s2);
bool ib_strcmp(char const *s1, char const *s2);
void ib_strcpy(char *dest, char const *src);
bool ib_cmp(char const c, char const *str);
int ib_puterr(char const *error, int val);
int *ib_rev_int_arr(int *array, int size);
int ib_free_arr(char **array, int val);
int *ib_sort_int(int *array, int size);
void *ib_calloc(int total, int size);
char **ib_rev_str_arr(char **array);
char **ib_sort_str(char **array);
char *ib_revstr(char const *str);
char *ib_strdup(char const *str);
void ib_putstr(char const *str);
bool ib_is_num(char const *str);
float ib_atof(char const *str);
int ib_strlen(char const *str);
int ib_atoi(char const *str);
int ib_arr_size(char **array);
void ib_putnbr(int nb);
char *ib_itoa(int num);

#endif