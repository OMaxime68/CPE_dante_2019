/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_cpy
*/

#include "my.h"
#include <stdlib.h>

char *my_cpy(char *str)
{
    int e = 0;
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (cpy == NULL)
        return (NULL);
    for (e = 0; str[e]; e++)
        cpy[e] = str[e];
    cpy[e] = '\0';
    return (cpy);
}