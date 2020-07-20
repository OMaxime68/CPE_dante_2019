/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** idk
*/

#include <stdlib.h>
#include "my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char *rev = malloc(sizeof(char) * (length + 1));
    int e = 0;

    for (e = 0; e < length; e++)
        rev[e] = str[length - e - 1];
    rev[e] = '\0';
    free(str);
    return (rev);
}