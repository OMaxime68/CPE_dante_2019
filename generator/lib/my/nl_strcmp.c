/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcmp
*/

#include "my.h"
#include <stdlib.h>

int nl_strcmp(char *s1, char *s2, int release)
{
    int e = 0;

    for (; s1[e] != '\0' || s2[e] != '\0'; e++) {
        if (s1[e] < s2[e]) {
            my_free(s1, s2, NULL, release);
            return (-1);
        } else if (s1[e] > s2[e]) {
            my_free(s1, s2, NULL, release);
            return (1);
        }
    }
    my_free(s1, s2, NULL, release);
    return (0);
}