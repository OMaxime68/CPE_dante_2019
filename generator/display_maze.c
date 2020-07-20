/*
** EPITECH PROJECT, 2020
** generator
** File description:
** display_maze
*/

#include "include/generator.h"

void display_imperfect_maze(generator_t *gt)
{
    int o = 0;
    long long int nb = 0;
    int judge = (gt->width * gt->height < 1000) ? 5 : 20;

    for (int e = 0; e < gt->height; ++e) {
        for (int i = 0; i < gt->width; ++i) {
            if (gt->process[e][i] & 1)
                gt->maze[o++] = '*';
            else {
                gt->maze[o++] = (nb % judge == 0) ? '*' : 'X';
                ++nb;
            }
        }
        gt->maze[o++] = (e != gt->l_y) ? '\n' : '\0';
    }
    write(1, gt->maze, ((gt->width + 1) * gt->height) - 1);
}

void display_perfect_maze(generator_t *gt)
{
    int o = 0;

    for (int e = 0; e < gt->height; ++e) {
        for (int i = 0; i < gt->width; ++i) {
            if (gt->process[e][i] & 1)
                gt->maze[o++] = '*';
            else
                gt->maze[o++] = 'X';
        }
        gt->maze[o++] = (e != gt->l_y) ? '\n' : '\0';
    }
    write(1, gt->maze, ((gt->width + 1) * gt->height) - 1);
}