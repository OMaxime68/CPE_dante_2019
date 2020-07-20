/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** pour include tout
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>

void my_putchar(char c);
void my_swap(int *a, int *b);
void my_putrstr(char *str);
////////////////////////////////////////////////////////////
///
/// \brief free management
///
/// \param one = 1 (str maybe to free)
/// \param two = 3 (str maybe to free)
/// \param three = 5 (str maybe to free)
/// \param delete have to add the number
/// to choose which one to free
///
///
///
////////////////////////////////////////////////////////////
void my_free(char *one, char *two, char *three, int delete);

/////////////////////////////////////////////////////////
///
/// \brief put str with color
///
/// \param str string you want to display
/// \param color choose witch color
/// \param option different options
/// \param delete free or not free
/////////////////////////////////////////////////////////
void my_putcstr(char *str, char *color, int option);
int my_occur(char *str, char element);
int my_put_nbr(int nb);
int my_is_num(char *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_strcmp(char *s1, char *s2);
int my_length_lim(char *str, char lim);
int my_length_lim_nb(char *str, char lim, int occurence);
int my_strcmp_low(char *s1, char *s2);
int my_isalpha_num(char *str);
char *my_revstr(char *str);
char *my_intchar(int nb);
char *my_cpy(char *src);
char *my_strcat(char *one, char *two);
char *my_strcat_in(char *bread, char *sausage, char ketchup);
char *my_cpy_st(char *str, char start);
char *my_cpy_lim(char *original, char lim);
char *my_strcat_bside(char *one, char *two, char *three);
void nl_putrstr(char *str);
void nl_putcstr(char *str, char *color, int bold);
int nl_putstr(char *str);
int nl_getnbr(char *str);
int nl_strcmp(char *s1, char *s2, int delete);
int nl_length_lim(char *str, char lim);
int nl_strcmp_low(char *s1, char *s2, int release);
char *nl_strcat(char *one, char *two, int delete);
char *nl_strcat_in(char *bread, char *sausage, char ketchup, int release);
char *nl_cpy_st(char *str, char start);
char *nl_cpy_lim(char *original, char lim);
char *nl_strcat_bside(char *one, char *two, char *three, int delete);
char *nl_cpy_lim_nb(char *original, char lim, int occurence, int release);
char **my_malloc_oo(int width, int height);
unsigned char **my_malloc_uoo(int width, int height);

#endif