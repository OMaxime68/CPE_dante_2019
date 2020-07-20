##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make files
##

SRC	=	my_getnbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_str_isnum.c	\
		my_calloc.c	\
		my_strcomp.c	\
		str_compare.c	\
		my_strdup.c	\
		parser.c	\
		my_glue_sep.c	\
		my_contains.c	\
		my_str_isalpha.c	\
		my_strcat.c	\
		my_printf.c	\
		freer.c	\
		my_char2len.c	\
		read_file.c	\
		my_slice.c	\
		my_atoi.c	\

CFLAGS	=	-Wall -Werror

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@mv $(NAME) ../
	@echo -ne "\033[2K$(NAME) : \033[01;38;5;201mOK\033[0;0m"
	@echo -ne '\n'

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS);
	@echo -ne "\033[2KCompiled $< : \033[01;38;5;201mOK\033[0;0m  \r"

clean:
	@rm -f *.o
	@rm -f flags/*.o
	@rm -f linked/*.o

fclean: clean
	@rm -f ../$(NAME)

re:	fclean all
