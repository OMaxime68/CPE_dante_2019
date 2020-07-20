/*
** EPITECH PROJECT, 2020
** solver
** File description:
** solver
*/

#include "../include/my.h"
#include "../include/pos.h"

static int check_chars(char *map)
{
    while (*map) {
        if (*map != 'X' && *map != '*' && *map != '\n')
            return (1);
        ++map;
    }
    return (0);
}

static int check_format(char **map)
{
    int length = my_strlen(*map);
    int i = 0;

    if (map == NULL)
        return (1);
    if (length <= 0)
        return (1);
    while (map[i]) {
        if (my_strlen(map[i]) != length)
            return (1);
        ++i;
    }
    return (0);
}

char **get_file(char **av)
{
    char *filename = av[1];
    int fd = get_fd(filename);
    char *file_str;
    char **file_array;

    if (fd == -1)
        return (NULL);
    file_str = read_file(fd, 1024);
    if (file_str == NULL || check_chars(file_str)) {
        freeif(file_str);
        return (NULL);
    }
    if (check_format(file_array = parse(file_str, '\n'))) {
        multi_free("21", file_array, file_str);
        return (NULL);
    }
    multi_free("1", file_str);
    return (file_array);
}

int solve(char **file_array)
{
    pos_t end = {my_strlen(file_array[0]) - 1, my_char2len(file_array) - 1};
    pos_t cursor = {0, 0};
    int ret = -1;

    while (de_filling(file_array, &end) != 0);
    while (1) {
        file_array[cursor.y][cursor.x] = 'o';
        if (cursor.x == end.x && cursor.y == end.y)
            return (0);
        if (move_cursor(&cursor,
            direction_fw(file_array, cursor, end, '*')) == 0) {
            file_array[cursor.y][cursor.x] = '^';
            ret = move_cursor(&cursor,
                direction_fw(file_array, cursor, end, 'o'));
        }
        if (ret == 0)
            return (my_putstr(1, "no solution found\n") + 84);
    }
    return (0);
}
