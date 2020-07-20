/*
** EPITECH PROJECT, 2020
** flags.h
** File description:
** flags things
*/

#ifndef FLAGS_H_
#define FLAGS_H_

#define FLAGS_LINES 2
#define FLAGS_COL 1
#define FLAGS_INT 1

int is_flag(char *str, char *flags[FLAGS_LINES][FLAGS_COL]);
int is_single(char _char, char *flags[FLAGS_LINES]);
int check_single(char *str);
int check_double(char *str);
int flags_handler(int flags[FLAGS_INT], char **array);


#endif
