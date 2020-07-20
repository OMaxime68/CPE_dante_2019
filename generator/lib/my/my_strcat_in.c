/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcat_in
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat_in(char *bread, char *sausage, char ketchup)
{
    int inc_h = 0;
    int inc_b = 0;
    char *hotdog = malloc(my_strlen(bread) + my_strlen(sausage) + 1);

    for (; bread[inc_b] != '\0' && bread[inc_b] != ketchup; inc_b++)
        hotdog[inc_h++] = bread[inc_b];
    hotdog[inc_h++] = bread[inc_b++];
    for (int inc_s = 0; sausage[inc_s] != '\0'; inc_s++)
        hotdog[inc_h++] = sausage[inc_s];
    for (; bread[inc_b] != '\0'; inc_b++)
        hotdog[inc_h++] = bread[inc_b];
    hotdog[inc_h] = '\0';
    return (hotdog);
}