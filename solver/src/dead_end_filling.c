/*
** EPITECH PROJECT, 2020
** dead_end_filling
** File description:
** fills dead ends
*/

#include "../include/my.h"
#include "../include/pos.h"

static int is_wall(char **file_array, pos_t *end, int i, int j)
{
    if (-1 == j && 0 == i)
        return (0);
    if (end->x + 1 == j && end->y == i)
        return (0);
    if (i < 0 || j < 0 || end->x < j || end->y < i)
        return (1);
    return ((file_array[i][j] != '*'));
}

static int fill_ends(char **file_array, pos_t *end, int i, int j)
{
    int walls = 0;

    if ('*' != file_array[i][j])
        return (0);
    walls += is_wall(file_array, end, i + 1, j);
    walls += is_wall(file_array, end, i - 1, j);
    walls += is_wall(file_array, end, i, j + 1);
    walls += is_wall(file_array, end, i, j - 1);
    if (3 == walls) {
        file_array[i][j] = '^';
        return (1);
    }
    return (0);
}

int de_filling(char **file_array, pos_t *end)
{
    int ret = 0;

    for (int i = 0; file_array[i]; ++i) {
        for (int j = 0; file_array[i][j]; ++j) {
            ret += fill_ends(file_array, end, i, j);
        }
    }
    return (ret);
}
