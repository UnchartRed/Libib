/*
** EPITECH PROJECT, 2021
** ib_sort_int
** File description:
** returns a sorted array of int given as a parameter
*/

#include "../../includes/ib.h"

int *ib_sort_int(int *array, int size)
{
    int tmp[size];
    int *result;
    int score = 0;

    for (int i = 0; i < size; i++, score = 0) {
        for (int j = 0; j < size; j++) {
            if (i != j && array[i] < array[j])
                score++;
            if (array[i] == array[j] && i < j)
                score++;
        }
        tmp[size - score - 1] = array[i];
    }
    result = tmp;
    return (result);
}