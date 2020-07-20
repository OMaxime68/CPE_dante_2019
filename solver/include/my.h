/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include "libs.h"

#ifndef ISNUM
#define ISNUM(val) (val >= 48 && val <= 57) ? 1 : 0
#endif

#ifndef ABS
#define ABS(val) (val >= 0) ? val : (val * (-1))
#endif

#ifndef MY_H_
#define MY_H_

int my_atoi(char *str);
int my_atoie(char *str);
int my_getnbr(char const *str, int start);
int my_nbrlen(int nb);

int my_strlen(char const *str);
int my_char2len(char **char2);

char *my_strdup(char *str);
char *my_strndup(char *str, int n);
int my_strcomp(char *string, char *testr);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char *src, int size);
char *my_slice(char *str, int start, int end);

int my_putchar(int fd, char c);
int my_putstr(int fd, char const *str);
int my_putnstr(int fd, char const *str, int n);
int my_puttwostr(int fd, char const *str, char const *str2);
int my_put2str(int fd, char **arr);
int my_printf(int fd, char const *format, ...);

int str_compare(char *str1, char *str2);

int my_str_isnum(char *str);
int my_str_isalpha(char *str);

char *my_int_to_array(int);
char **parse(char *, char);
int contains(char *, char *);
char *my_glue_sep(char *path, char *name, char sep);

int get_fd(char *name);
char *read_file(int fd, int rdsize);

char *my_calloc(int type, int len);
int freeif(void *elem);
int freeif_2d(void **);
void multi_free(char *str, ...);

#endif /*MY_H_*/
