# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/14 13:43:52 by elebouch          #+#    #+#              #
#    Updated: 2017/11/17 09:40:22 by dlavaury         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./

NAME = fillit

SRC = ft_bzero.c \
	  ft_check_tetri.c \
	  ft_read_file.c \
	  ft_fillit.c \
	  ft_put_map.c \
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

re: fclean
	@make all

.PHONY: all re fclean clean
