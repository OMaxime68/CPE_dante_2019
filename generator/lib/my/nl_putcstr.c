/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_putcstr
*/

#include "my.h"
#include "color.h"
#include <stdlib.h>

void nl_putcstr(char *str, char *color, int option)
{
    my_putstr("\033[");
    my_put_nbr(option);
    my_putstr(color);
    my_putstr(str);
    my_putstr(RESET);
    free(str);
}