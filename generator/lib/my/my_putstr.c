/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** put
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}