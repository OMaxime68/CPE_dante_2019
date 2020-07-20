/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_free_oo
*/

#include "array.h"

void my_free_oo(char **oo)
{
    for (int e = 0; oo[e] != NULL; e++)
        free(oo[e]);
    free(oo);
}

void my_free_uoo(unsigned char **uoo)
{
    for (int e = 0; uoo[e] != NULL; e++)
        free(uoo[e]);
    free(uoo);
}