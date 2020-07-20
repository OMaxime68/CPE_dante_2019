/*
** EPITECH PROJECT, 2020
** pos
** File description:
** pos
*/

#ifndef POS_H_
#define POS_H_

typedef struct pos_s
{
    int x;
    int y;
} pos_t;

char **get_file(char **av);
int solve(char **file_array);

char checker(char **file_array, pos_t end, int pos_y, int pos_x);
int direction_fw(char **file_array, pos_t cursor, pos_t end, char _char);
int direction_bw(char **file_array, pos_t cursor, pos_t end, char _char);
int move_cursor(pos_t *cursor, int direction);
int de_filling(char **file_array, pos_t *end);

#endif
