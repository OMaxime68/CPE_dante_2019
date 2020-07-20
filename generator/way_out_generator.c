/*
** EPITECH PROJECT, 2020
** generator
** File description:
** way_out_generator
*/

#include "include/generator.h"

static void bad_maze_end(generator_t *gt)
{
    gt->x = gt->l_x;
    gt->y = gt->l_y;
    while (gt->process[gt->y][gt->x] == 0) {
        if (gt->l_x >= gt->l_y) {
            gt->process[gt->y][gt->x] = gt->process[gt->y][gt->x] | 1;
            gt->x--;
        } else {
            gt->process[gt->y][gt->x] = gt->process[gt->y][gt->x] | 1;
            gt->y--;
        }
    }
    gt->process[gt->y][gt->x] = gt->process[gt->y][gt->x] | 1;
}

void way_out_management(generator_t *gt)
{
    if (gt->process[gt->l_y][gt->l_x] == 0) {
        bad_maze_end(gt);
        return;
    }
    if (!(gt->process[gt->l_y][gt->l_x] & 1))
        gt->process[gt->l_y][gt->l_x] = gt->process[gt->l_y][gt->l_x] | 1;
}