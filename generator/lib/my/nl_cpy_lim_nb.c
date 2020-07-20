/*
** EPITECH PROJECT, 2020
** minishell_no_leak
** File description:
** nl_cpy_lim_nb
*/

#include "my.h"
#include <stdlib.h>

char *nl_cpy_lim_nb(char *original, char lim, int occurence, int release)
{
    int e = 0;
    int nb_lim = 0;
    char *copy = malloc(my_length_lim_nb(original, lim, occurence) + 1);

    if (copy == NULL)
        return (NULL);
    for (e = 0; original[e] != '\0' && nb_lim < occurence; e++) {
        if (original[e] == lim)
            nb_lim++;
        if (nb_lim == occurence)
            break;
        copy[e] = original[e];
    }
    copy[e] = '\0';
    my_free(original, NULL, NULL, release);
    return (copy);
}