/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** my_malloc
*/

#include "my.h"
#include <stdlib.h>

char **my_malloc_oo(int width, int height)
{
    int h = 0;
    char **new = malloc(sizeof(char *) * (height + 1));

    if (new == NULL)
        return (NULL);
    for (h = 0; h < height; h++) {
        new[h] = malloc(sizeof(char) * (width + 1));
        if (new[h] == NULL)
            return (NULL);
    }
    new[h] = NULL;
    return (new);
}

unsigned char **my_malloc_uoo(int width, int height)
{
    int h = 0;
    unsigned char **new = malloc(sizeof(unsigned char *) * (height + 1));

    if (new == NULL)
        return (NULL);
    for (h = 0; h < height; h++) {
        new[h] = malloc(sizeof(unsigned char) * (width + 1));
        if (new[h] == NULL)
            return (NULL);
        for (int f = 0; f < width; f++)
            new[h][f] = 0;
    }
    new[h] = NULL;
    return (new);
}