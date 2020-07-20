/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_isalpha_num
*/

#include "my.h"

int my_isalpha_num(char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++) {
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
            continue;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            continue;
        else
            return (-1);
    }
    return (0);
}