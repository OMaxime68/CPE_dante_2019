/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strpcy_st
*/

#include "my.h"
#include <stdlib.h>

static int length_st(char *str, char start)
{
    int e = 0;
    int length = 0;

    for (e = 0; str[e] && str[e] != start; e++);
    for (; str[e]; e++, length++);
    return (length);
}

char *nl_cpy_st(char *str, char start)
{
    int inc = 0;
    int inc_cpy = 0;
    char *cpy = malloc(sizeof(char) * (length_st(str, start) + 1));

    if (cpy == NULL)
        return (NULL);
    for (; str[inc] && str[inc] != start; inc++);
    inc++;
    for (; str[inc]; inc++)
        cpy[inc_cpy++] = str[inc];
    cpy[inc_cpy] = '\0';
    free(str);
    return (cpy);
}