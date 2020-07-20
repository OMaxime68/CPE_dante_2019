/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "include/generator.h"

int main(int argc, char **argv)
{
    if (argc <= 2 || argc >= 5)
        return (84);
    return (generator_root(argc, argv));
}