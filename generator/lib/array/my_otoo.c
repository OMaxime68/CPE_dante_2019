/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** otoo
*/

#include "array.h"
#include "../my/my.h"

static int count_nb_of_part(char *str, char sep_one, char sep_two, int *nb_part)
{
    int e = 0;
    int terms = 0;
    int block = 0;

    for (e = 0; str[e] == sep_one || str[e] == sep_two; e++);
    for (; str[e]; e++) {
        if (str[e] != sep_one && str[e] != sep_two && terms == 0) {
            block++;
            terms = 1;
        } else if ((str[e] == sep_one || str[e] == sep_two) && terms == 1) {
            terms = 0;
        }
    }
    *nb_part = block;
    return (block);
}

static void space_handling(int *space, char *str, char sep_one, char sep_two)
{
    int e = 0;
    int terms = 0;
    int begin = 0;
    int inc = 0;

    for (; str[e]; e++) {
        if (str[e] != sep_one && str[e] != sep_two && terms == 0) {
            begin = e;
            terms = 1;
        } else if ((str[e] == sep_one || str[e] == sep_two) && terms == 1) {
            space[inc++] = (e - begin) + 1;
            terms = 0;
        }
    }
    if (e != 0 && str[e - 1] != sep_one && str[e - 1] != sep_two)
        space[inc] = (e - begin) + 1;
}

char **parsing(char *str, char sep_one, char sep_two, int *nb_of_part)
{
    int i = 0;int e = 0;
    int o = 0;
    int nb_part = count_nb_of_part(str, sep_one, sep_two, nb_of_part);
    int *space = malloc(sizeof(int) * (nb_part + 1));
    char **otoo = malloc(sizeof(char *) * (nb_part + 1));

    space_handling(space, str, sep_one, sep_two);
    for (; str[o] == sep_one || str[o] == sep_two; o++);
    for (; e < nb_part; e++) {
        otoo[e] = malloc(sizeof(char) * (space[e] + 1));
        for (; str[o] != sep_one && str[o] != sep_two && str[o] != '\0';
            i++, o++)
            otoo[e][i] = str[o];
        for (;str[o] != '\0' && (str[o] == sep_one || str[o] == sep_two); o++);
        otoo[e][i] = '\0';
        i = 0;
    }
    otoo[e] = NULL;
    free(space);
    return (otoo);
}

char **my_otoo(char *str, char sep_one, char sep_two, int *nb_of_part)
{
    for (int e = 0; str[e]; e++) {
        if (str[e] == '\t')
            str[e] = sep_one;
    }
    return (parsing(str, sep_one, sep_two, nb_of_part));
}