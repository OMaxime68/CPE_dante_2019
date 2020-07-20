/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** my_str_isnum
*/

#include <unistd.h>

int my_str_isnum(char *str)
{
    if (str == NULL)
        return (84);
    while (*str == '+' || *str == '-')
        ++str;
    while (*str) {
        if (!(*str >= 48 && *str <= 57))
            return (1);
        ++str;
    }
    return (0);
}
