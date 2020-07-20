/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** generator_root
*/

#include "include/generator.h"

static void perfect_or_imerfect(generator_t *gt, char **argv)
{
    if (my_strcmp(argv[3], "perfect") == 0)
        gt->option = 1;
    else if (my_strcmp(argv[3], "imperfect") == 0)
        gt->option = 0;
}

static int init_generator(generator_t *gt, int argc, char **argv)
{
    gt->exit_maze = 0;
    gt->x = 0;
    gt->y = 0;
    gt->end = 0;
    gt->y_check = 0;
    gt->x_check = 0;
    gt->width = my_getnbr(argv[1]);
    gt->height = my_getnbr(argv[2]);
    gt->l_x = gt->width - 1;
    gt->l_y = gt->height - 1;
    if (argc > 3)
        perfect_or_imerfect(gt, argv);
    else
        gt->option = 0;
    gt->maze = malloc(sizeof(char) * ((gt->width + 1) * gt->height + 1));
    gt->process = my_malloc_uoo(gt->width, gt->height);
    if (gt->maze == NULL || gt->process == NULL ||
        gt->width == 0 || gt->height == 0)
        return (84);
    return (0);
}

void free_generator(generator_t *gt)
{
    free(gt->maze);
    my_free_uoo(gt->process);
}

int generator_root(int argc, char **argv)
{
    generator_t gt;

    srand(time(NULL));
    if (init_generator(&gt, argc, argv) != 0)
        return (84);
    path_generator(&gt);
    free_generator(&gt);
    return (0);
}