/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main for the program
*/

#include "../include/my.h"
#include "../include/flags.h"
#include "../include/list.h"
#include "../include/pos.h"

char **my_2strdup(char **array)
{
    int len = my_char2len(array);
    char **ret = malloc(sizeof(char *) * (len + 1));
    char **tmp = ret;

    if (ret == NULL)
        return (NULL);
    while (*array) {
        *ret = my_strdup(*array++);
        if (*ret == NULL)
            return (NULL);
        ++ret;
    }
    *ret = NULL;
    return (tmp);
}

void replace_lock(char *str1, char *str2)
{
    for (int i = 0; str1[i]; ++i) {
        if (str1[i] == '^')
            str2[i] = '*';
    }
}

void print_tab(char **array)
{
    for (int i = 0; array[i]; ++i) {
        my_putstr(1, array[i]);
        if (array[i + 1])
            my_putchar(1, '\n');
    }
}

int program(char **av)
{
    char **file_array = get_file(av);
    char **cpy = NULL;

    if (file_array == NULL) {
        my_putstr (2, "incorrect file\n");
        return (84);
    }
    if (solve(file_array) != 84) {
        if ((cpy = my_2strdup(file_array)) == NULL) {
            multi_free("2", file_array);
            return (84);
        }
        for (int i = 0; file_array[i]; ++i) {
            replace_lock(file_array[i], cpy[i]);
        }
        print_tab(cpy);
    }
    multi_free("22", cpy, file_array);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    return (program(av));
}
