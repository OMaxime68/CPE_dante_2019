/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_putrstr
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

void nl_putrstr(char *str)
{
    write(2, str, my_strlen(str));
    free(str);
}