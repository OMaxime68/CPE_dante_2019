/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** returns an int
*/

#include "../../include/my.h"
#include <unistd.h>

static int nbr_detect(int st, char const *str)
{
    int count = 0;

    while ((str[st] < 48 || str[st] > 57) && str[st] != '\0') {
        if (str[st] == '-')
            count--;
        st++;
        count++;
    }
    if (str[st] == '\0')
        return (-1);
    return (st);
}

int my_getnbr(char const *str, int start)
{
    int j = nbr_detect(start, str);
    int i = j;
    int neg = 0;
    int nb = 0;

    if (i == -1)
        return (-0);
    while (str[j - 1] == '-') {
        ++neg;
        --j;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        nb = (nb * 10) + (str[i] - 48);
        ++i;
    }
    if (neg % 2 != 0)
        nb *= -1;
    return (nb);
}
