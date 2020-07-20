/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strcmp
*/

#include "my.h"
#include <stdlib.h>

static void put_into_lowcase(char *str)
{
    for (int e = 0; str[e]; e++) {
        if (str[e] >= 'A' && str[e] <= 'Z')
            str[e] = str[e] + 32;
    }
}

static void free_two(char *str_one, char *str_two)
{
    free(str_one);
    free(str_two);
}

int my_strcmp_low(char *s1, char *s2)
{
    int e = 0;
    char *tmp_s1 = my_cpy(s1);
    char *tmp_s2 = my_cpy(s2);

    put_into_lowcase(tmp_s1);
    put_into_lowcase(tmp_s2);
    for (e = 0; tmp_s1[e] != '\0' || tmp_s2[e] != '\0'; e++) {
        if (tmp_s1[e] < tmp_s2[e]) {
            free_two(tmp_s1, tmp_s2);
            return (-1);
        } else if (tmp_s1[e] > tmp_s2[e]) {
            free_two(tmp_s1, tmp_s2);
            return (1);
        }
    }
    free_two(tmp_s1, tmp_s2);
    return (0);
}