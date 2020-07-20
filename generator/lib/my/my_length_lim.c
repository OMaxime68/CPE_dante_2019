/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_length_lim
*/

#include "my.h"

int my_length_lim(char *str, char lim)
{
    int length = 0;

    for (length = 0; str[length] != '\0' && str[length] != lim; length++);
    return (length);
}