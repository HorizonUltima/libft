NAME = libft.a

SRC = 

OBJ = $(SRC:.c=.o)

BONUS_SRC = 

BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: 

clean: rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: 

.PHONY: all bonus clean fclean re
