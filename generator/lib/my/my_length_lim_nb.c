/*
** EPITECH PROJECT, 2020
** minishell_no_leak
** File description:
** my_length_lim_nb
*/

#include "my.h"

int my_length_lim_nb(char *str, char lim, int occurence)
{
    int nb_lim = 0;
    int length = 0;

        for (length = 0; str[length] != '\0' && nb_lim < occurence; length++)
            if (str[length] == lim)
                nb_lim++;
        return (length);
}