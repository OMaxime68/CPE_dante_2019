##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC 	=	my_getnbr.c	\
			my_malloc.c	\
			my_cpy.c	\
			my_putchar.c	\
			my_put_nbr.c	\
			my_putrstr.c	\
			my_putcstr.c	\
			my_putstr.c	\
			my_revstr.c	\
			my_strlen.c	\
			my_strcat.c	\
			my_strcat_bside.c	\
			my_strcat_in.c	\
			my_intchar.c	\
			my_strcmp.c	\
			my_strcmp_low.c	\
			my_cpy_lim.c	\
			my_cpy_st.c	\
			my_length_lim.c	\
			my_length_lim_nb.c	\
			my_isalpha_num.c	\
			my_occur.c	\
			my_free.c	\
			nl_getnbr.c	\
			nl_putrstr.c	\
			nl_putcstr.c	\
			nl_putstr.c	\
			nl_strcat.c	\
			nl_strcat_bside.c	\
			nl_strcat_in.c	\
			nl_strcmp.c	\
			nl_strcmp_low.c	\
			nl_cpy_lim.c	\
			nl_cpy_lim_nb.c	\
			nl_cpy_st.c

OBJ 	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ./../../include/
	cp color.h ./../../include/
	cp $(NAME) ./../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ./../$(NAME)

re: fclean all