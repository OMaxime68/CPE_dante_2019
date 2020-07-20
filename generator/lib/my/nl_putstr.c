/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** put
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int nl_putstr(char *str)
{
    write(1, str, my_strlen(str));
    free(str);
}