/*
** EPITECH PROJECT, 2020
** mover
** File description:
** mover
*/

#include "../include/my.h"
#include "../include/pos.h"

char checker(char **file_array, pos_t end, int pos_y, int pos_x)
{
    if (pos_y < 0 || pos_x < 0)
        return ('X');
    if (pos_y > end.y || pos_x > end.x)
        return ('X');
    return (file_array[pos_y][pos_x]);
}

int direction_fw(char **file_array, pos_t cursor, pos_t end, char _char)
{
    if (checker(file_array, end, cursor.y, cursor.x + 1) == _char)
        return (1);
    if (checker(file_array, end, cursor.y + 1, cursor.x) == _char)
        return (2);
    if (checker(file_array, end, cursor.y - 1, cursor.x) == _char)
        return (3);
    if (checker(file_array, end, cursor.y, cursor.x - 1) == _char)
        return (4);
    return (0);
}

int direction_bw(char **file_array, pos_t cursor, pos_t end,  char _char)
{
    if (checker(file_array, end, cursor.y, cursor.x - 1) == _char)
        return (4);
    if (checker(file_array, end, cursor.y - 1, cursor.x) == _char)
        return (3);
    if (checker(file_array, end, cursor.y + 1, cursor.x) == _char)
        return (2);
    if (checker(file_array, end, cursor.y, cursor.x + 1) == _char)
        return (1);
    return (0);
}

int move_cursor(pos_t *cursor, int direction)
{
    switch (direction) {
    case 1:
        ++cursor->x;
        return (1);
    case 2:
        ++cursor->y;
        return (2);
    case 3:
        --cursor->y;
        return (3);
    case 4:
        --cursor->x;
        return (4);
    }
    return (0);
}
