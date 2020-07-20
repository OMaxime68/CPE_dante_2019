/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_putrstr
*/

#include "my.h"
#include <unistd.h>

void my_putrstr(char *str)
{
    write(2, str, my_strlen(str));
}