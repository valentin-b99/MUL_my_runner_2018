##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	= my_runner

CC	= gcc

RM	= rm -f

SRC	= 	./src/lib/int_to_char.c \
	  	./src/lib/my_getnbr.c \
	  	./src/lib/my_putstr.c \
	  	./src/lib/my_revstr.c \
	  	./src/lib/my_strcat.c \
	  	./src/lib/my_strcmp.c \
	  	./src/lib/my_strlen.c \
	  	./src/lib/my_strcpy.c \
		./src/lib/add_zero.c \
		./src/create/end_menu_texts.c \
		./src/create/main_menu_texts.c \
		./src/create/set_text_origin.c \
		./src/create/sounds.c \
	  	./src/create/sprites.c \
	  	./src/create/texts.c \
	  	./src/create/window.c \
	  	./src/destroy/all.c \
		./src/destroy/sounds.c \
		./src/destroy/sprites.c \
		./src/destroy/texts.c \
	  	./src/draw/sprites/all.c \
	  	./src/draw/sprites/backgrounds.c \
	  	./src/draw/sprites/blocks.c \
		./src/draw/sprites/em_buttons.c \
	  	./src/draw/sprites/hud.c \
		./src/draw/sprites/mm_buttons.c \
		./src/draw/sprites/specials_blocks.c \
		./src/draw/sprites/tests.c \
		./src/draw/texts/all.c \
		./src/draw/texts/menus.c \
		./src/draw/end_circle.c \
	  	./src/events/all.c \
		./src/events/buttons_main_menu.c \
		./src/events/blocks_interractions.c \
		./src/events/checkpoint.c \
		./src/events/end.c \
		./src/events/roulade_perso.c \
		./src/events/tests_blocks_interract_details.c \
		./src/events/tests_blocks_interract_prim.c \
		./src/events/tests.c \
	  	./src/gravity/all.c \
	  	./src/gravity/perso.c \
	  	./src/gravity/tests.c \
		./src/initializations/loading_screen.c \
	  	./src/initializations/perso.c \
		./src/initializations/set_speed.c \
	  	./src/initializations/struct.c \
		./src/map/errors.c \
	  	./src/map/process_char.c \
	  	./src/map/read.c \
	  	./src/map/set_for_draw.c \
		./src/rects/all.c \
		./src/rects/blocks.c \
		./src/rects/perso.c \
		./src/rects/seconds.c \
		./src/main.c \
		./src/score.c

OBJ	= $(SRC:.c=.o)

FLAG	= -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME) $(FLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
