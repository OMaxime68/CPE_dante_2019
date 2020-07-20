/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** generator
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_


#include "my.h"
#include "array.h"
#include <stdlib.h>
#include <time.h>

typedef struct generator_s
{
    unsigned char possible_way;
    unsigned char nb_p_way;
    unsigned char end;
    unsigned char option;
    int exit_maze;
    int x;
    int y;
    int width;
    int height;
    int l_x;
    int l_y;
    int y_check;
    int x_check;
    char *maze;
    unsigned char **process;
    long int nb_ramification;
}generator_t;

void free_generator(generator_t *gt);
int generator_root(int argc, char **argv);

int path_generator(generator_t *gt);

void way_out_management(generator_t *gt);

void display_imperfect_maze(generator_t *gt);
void display_perfect_maze(generator_t *gt);

__always_inline int empty_case(generator_t *gt, int x, int y, unsigned char inf)
{
    gt->process[y][x] = gt->process[y][x] | inf;
    if (inf != 16 && x != 0 && gt->process[y][x] & 16)
        return (-1);
    if (inf != 8 && y != 0 && gt->process[y][x] & 8)
        return (-1);
    if (inf != 4 && y != gt->l_y && gt->process[y][x] & 4)
        return (-1);
    if (inf != 2 && x != gt->l_x && gt->process[y][x] & 2)
        return (-1);
    return (0);
}

#endif /* !GENERATOR_H_ */
