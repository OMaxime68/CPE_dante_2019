##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make files
##

FSRC	=	src/

SRC	=	$(FSRC)main.c				\
		$(FSRC)solver.c				\
		$(FSRC)mover.c				\
		$(FSRC)dead_end_filling.c	\

NAME	=	solver

OBJ	=	$(SRC:.c=.o)

LDFLAGS +=	-L./lib -lmy

CFLAGS	+=	-Wall

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(MAKE) --no-print-directory -C lib/my all
	@$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo -ne "\033[2K$(NAME) : \033[01;38;5;31mOK\033[0;0m"
	@echo -ne '\n'

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -ne "\033[2KCompiled $< : \033[01;38;5;31mOK\033[0;0m \r"

clean:
	@$(MAKE) --no-print-directory -C lib/my clean
	@rm -f src/*.o
	@rm -f vgcore*
	@echo -e "'.o' Deletion : \033[01;38;5;220mDONE\033[0;0m"

fclean: clean
	@$(MAKE) --no-print-directory -C lib/my fclean
	@rm -f $(NAME)
	@echo -e "'$(NAME)' deletion : \033[01;38;5;222mDONE\033[0;0m"

re:	fclean all

debug:
	@$(MAKE) --no-print-directory -C lib/my all
	@$(CC) $(OBJ) -o $(NAME) $(CFLAGS) -g
	@echo "Valgrind Output :"
	@valgrind ./$(NAME)

go:	all
	@./$(NAME)
