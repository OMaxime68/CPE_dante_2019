/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** reproduces function
*/

#include "../../include/my.h"

int my_atoi(char *str)
{
    int ret = 0;
    int neg = 0;

    if (my_str_isnum(str) != 0)
        return (0);
    while (*str == '+' || *str == '-') {
        if (*str == '-')
            ++neg;
        ++str;
    }
    while (*str) {
        ret *= 10;
        ret += *str - 48;
        ++str;
    }
    return (ret * ((neg & 1) ? (-1) : 1));
}

int my_atoie(char *str)
{
    int ret = 0;
    int neg = 0;

    while (*str == '+' || *str == '-') {
        if (*str == '-')
            ++neg;
        ++str;
    }
    while (ISNUM(*str)) {
        ret *= 10;
        ret += *str - 48;
        ++str;
    }
    return (ret * ((neg & 1) ? (-1) : 1));
}
