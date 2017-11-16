# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/14 13:43:52 by elebouch          #+#    #+#              #
#    Updated: 2017/11/16 20:23:19 by dlavaury         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./

NAME = fillit

SRC = ft_bzero.c \
	  ft_check_tetri.c \
	  ft_init.c \
	  ft_open_file.c \
	  ft_param_error.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_read_file.c \
	  ft_tetri_error.c \
	  ft_read_tetri.c \
	  ft_new_tetri.c \
	  ft_find_type.c \
	  ft_block_validator.c \
	  ft_fillit.c \
	  ft_map_creator.c \
	  ft_map_cleaner.c \
	  ft_put_map.c \
	  ft_is_free.c \
	  ft_remove_last.c \
	  ft_end_cleaner.c \
	  main.c

OBJ = $(SRC:.c=.o)

# PROGRESS BAR
T = $(words $(SRC))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C '*' 100 / $T`%]"

#Color
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo "\n$(NAME) compilation	: $(_GREEN)done$(_END)"

%.o: %.c
	@printf "%-60b\r" "$(ECHO) Compiling $@"
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@echo "$(_YELLOW)clean$(_END)	: $(_GREEN)done$(_END)"

fclean:	clean
	@rm -f $(NAME)
	@echo "$(_YELLOW)fclean$(_END)	: $(_GREEN)done$(_END)"

re: fclean all

.PHONY: all re fclean clean
