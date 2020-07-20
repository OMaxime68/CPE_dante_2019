/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** path_generator
*/

#include "include/generator.h"

void get_and_fill_bit_information(generator_t *gt)
{
    gt->nb_p_way = 0;
    gt->possible_way = 0;
    gt->process[gt->y][gt->x] = gt->process[gt->y][gt->x] | 1;
    if (gt->x != 0 && !(gt->process[gt->y][gt->x] & 16) &&
        empty_case(gt, gt->x - 1, gt->y, 2) == 0) {
        gt->possible_way = gt->possible_way | 16;gt->nb_p_way++;
    }
    if (gt->y != 0 && !(gt->process[gt->y][gt->x] & 8) &&
        empty_case(gt, gt->x, gt->y - 1, 4) == 0) {
        gt->possible_way = gt->possible_way | 8;gt->nb_p_way++;
    }
    if (gt->y != gt->height - 1 && !(gt->process[gt->y][gt->x] & 4) &&
        empty_case(gt, gt->x, gt->y + 1, 8) == 0) {
        gt->possible_way = gt->possible_way | 4;gt->nb_p_way++;
    }
    if (gt->x != gt->width - 1 && !(gt->process[gt->y][gt->x] & 2) &&
        empty_case(gt, gt->x + 1, gt->y, 16) == 0) {
        gt->possible_way = gt->possible_way | 2;gt->nb_p_way++;
    }
}

int because_of_subject_not_clear(generator_t *gt)
{
    if (gt->possible_way & 2 && gt->x + 1 == gt->l_x && gt->y == gt->l_y) {
        ++gt->x;
        gt->exit_maze = 1;
        return (1);
    }
    if (gt->possible_way & 4 && gt->x == gt->l_x && gt->y + 1 == gt->l_y) {
        ++gt->y;
        gt->exit_maze = 1;
        return (1);
    }
    if (gt->x + 1 == gt->l_x && gt->y + 1 == gt->l_y) {
        if (gt->possible_way & 2) {
            ++gt->x;
            return (1);
        } else if (gt->possible_way & 4) {
            ++gt->y;
            return (1);
        }
    }
    return (0);
}

int choose_and_change_way(generator_t *gt)
{
    unsigned char i = 0;
    unsigned char way = 1;

    if (gt->possible_way == 0 || (gt->y == gt->l_y && gt->x == gt->l_x))
        return (-1);
    if (gt->exit_maze == 1) return (-1);
    if (because_of_subject_not_clear(gt)) return (1);
    i = (rand() % gt->nb_p_way) + 1;
    while (i)
        if (gt->possible_way & (way = way << 1))
            i--;
    if (way & 16)
        return (gt->x--);
    if (way & 8)
        return (gt->y--);
    if (way & 4)
        return (gt->y++);
    if (way & 2)
        return (gt->x++);
    return (0);
}

void find_new_begin(generator_t *restrict gt)
{
    int i = gt->x_check;

    for (int e = gt->y_check; gt->process[e] != NULL; e++) {
        for (i = (e == gt->y_check) ? gt->x_check : 0; i < gt->width; i++) {
            if (gt->process[e][i] == 2 || gt->process[e][i] == 4 ||
                gt->process[e][i] == 8 || gt->process[e][i] == 16) {
                gt->x = i;
                gt->y = e;
                gt->y_check = e;
                gt->x_check = i;
                return;
            }
        }
    }
    gt->end = 1;
}

int path_generator(generator_t *gt)
{
    for (int e = 0; gt->end == 0; e++) {
        get_and_fill_bit_information(gt);
        if (choose_and_change_way(gt) == -1)
            find_new_begin(gt);
    }
    way_out_management(gt);
    if (gt->option == 0)
        display_imperfect_maze(gt);
    else
        display_perfect_maze(gt);
    return (0);
}