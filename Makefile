##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

FLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-window

SRC	=	src/info/create_info.c			\
		src/info/gest_mouse.c			\
		src/target/anim.c				\
		src/target/create_target.c		\
		src/target/touch_target.c		\
		src/tools/itoc.c				\
		src/tools/my_atoi.c				\
		src/tools/my_putstr.c			\
		src/window/create_window.c		\
		src/window/drawing.c			\
		src/window/fps.c				\
		src/window/help.c				\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

go:
	./$(NAME)

rg: re go
