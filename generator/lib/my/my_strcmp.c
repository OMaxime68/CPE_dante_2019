/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int e = 0;

    for (; s1[e] != '\0' || s2[e] != '\0'; e++) {
        if (s1[e] < s2[e]) {
            return (-1);
        } else if (s1[e] > s2[e]) {
            return (1);
        }
    }
    return (0);
}