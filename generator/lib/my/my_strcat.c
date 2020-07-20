/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strcat
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat(char *one, char *two)
{
    int inc_s = 0;
    char *sum = malloc(sizeof(char) * (my_strlen(one) + my_strlen(two) + 1));

    if (sum == NULL)
        return (NULL);
    for (int e = 0; one[e] != '\0'; e++, inc_s++)
        sum[inc_s] = one[e];
    for (int i = 0; two[i] != '\0'; i++, inc_s++)
        sum[inc_s] = two[i];
    sum[inc_s] = '\0';
    return (sum);
}