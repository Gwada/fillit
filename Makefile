GCC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./

NAME = fillit

SRC = ft_bzero.c \
		ft_check_tetri.c \
		ft_file_read_error.c \
		ft_init.c \
		ft_open_file.c \
		ft_param_error.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_read_file.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_strsub.c \
		ft_tetri_error.c \
		ft_check_car.c \
		main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(GCC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) done"

clean:
	@rm -f $(OBJ)
	@echo "clean done"

fclean:	clean
	@rm -f $(NAME)
	@echo "fclean done"

re: fclean all
