/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i]; i++);
    return (i);
}