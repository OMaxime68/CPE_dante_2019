/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_cpy_lim
*/

#include "my.h"
#include <stdlib.h>

char *my_cpy_lim(char *original, char lim)
{
    int e = 0;
    char *copy = malloc(sizeof(char) * (my_length_lim(original, lim) + 1));

    for (e = 0; original[e] != '\0' && original[e] != lim; e++)
        copy[e] = original[e];
    copy[e] = '\0';
    return (copy);
}