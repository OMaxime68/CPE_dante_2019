##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile root
##

all:
	@make -sC ./generator/
	@make -sC ./solver/

clean:
	@make fclean -sC ./generator/
	@make fclean -sC ./solver/

fclean:	clean
	@make clean -sC ./generator/
	@make clean -sC ./solver/

re: fclean all

debug:
	@make debug -sC ./generator/
	@make debug -sC ./solver/