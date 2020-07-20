/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strcat_three
*/

#include "my.h"
#include <stdlib.h>

char *nl_strcat_bside(char *one, char *two, char *three, int release)
{
    int inc_s = 0;
    char *sum = malloc(my_strlen(one) + my_strlen(two) + my_strlen(three) + 1);

    if (sum == NULL)
        return (NULL);
    for (int e = 0; one[e] != '\0'; e++, inc_s++)
        sum[inc_s] = one[e];
    for (int i = 0; two[i] != '\0'; i++, inc_s++)
        sum[inc_s] = two[i];
    for (int o = 0; three[o] != '\0'; o++, inc_s++)
        sum[inc_s] = three[o];
    sum[inc_s] = '\0';
    my_free(one, two, three, release);
    return (sum);
}