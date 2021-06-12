/*
** EPITECH PROJECT, 2021
** ib_rev_int_arr
** File description:
** returns a reverted int array given as a parameter
*/

int *ib_rev_int_arr(int *array, int size)
{
    int tmp[size];
    int *result;

    for (int i = 0; i < size; i++)
        tmp[i] = array[size - i - 1];
    result = tmp;
    return (result);
}
