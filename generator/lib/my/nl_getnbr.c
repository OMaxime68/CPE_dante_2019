/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_getnbr
*/

#include <stdio.h>
#include <stdlib.h>

static int check(int *i, char *str)
{
    int b = 0;

    while (str[*i] == '-' || str[*i] == '+') {
        if (str[*i] == '-')
            b++;
        *i = *i + 1;
    }
    if (b % 2 == 0 || b == 0)
        return (1);
    else if (b % 2 == 1)
        return (-1);
}

int nl_getnbr(char *str)
{
    int i = 0;
    int e = 0;
    int s;
    double count = 0.1;
    int tmp = 0;
    int nbr = 0;

    s = check(&i, str);
    tmp = i;
    for (; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++)
        count *= 10;
    for (; str[tmp] != '\0' && (str[tmp] >= '0' && str[tmp] <= '9'); tmp++) {
        nbr = nbr + (str[tmp] - 48) * count;
        count *= 0.1;
    }
    nbr = nbr * s;
    free(str);
    return (nbr);
}