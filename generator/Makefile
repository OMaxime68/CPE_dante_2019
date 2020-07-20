##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	generator_root.c	\
		path_generator.c	\
		display_maze.c		\
		way_out_generator.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -L ./lib/my/ -lmy -L ./lib/linked_list/ -llinked_list -L ./lib/array/ -larray -I ./include/ -pedantic -Werror -Wall

NAME	=	generator

all:	$(NAME)

$(NAME): $(OBJ)
	@make -sC ./lib/my/
	@make -sC ./lib/array/
	@make -sC ./lib/linked_list/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "\033[01;38;5;10mGenerator================Compiling: Done\033[0;0m"

clean:
	@rm -f $(OBJ)
	@make fclean -sC ./lib/my/
	@make fclean -sC ./lib/array/
	@make fclean -sC ./lib/linked_list/
	@echo "Generator============Deletion *o: Done"

fclean:	clean
	@rm -f $(NAME)
	@echo "Generator============Deletion: Done"

re: fclean all

debug:
	@make -sC ./lib/my/
	@make -sC ./lib/array/
	@make -sC ./lib/linked_list/
	@gcc -o $(NAME) $(SRC) $(CFLAGS) $(DEBUG) -g
	@echo "Generator============Valgrind compilation: Done"