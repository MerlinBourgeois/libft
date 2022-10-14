# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mebourge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:35:20 by mebourge          #+#    #+#              #
#    Updated: 2022/10/12 10:02:10 by mebourge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -d 1 -name "*.c" | grep -v _bonus)

SRC_BONUS = $(shell find . -d 1 -name "*.c" | grep -i lst)

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB  = ar rcs $(NAME)

REMOVE = rm -f

all: $(NAME) bonus

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

bonus:	$(OBJ_BONUS)
	@$(LIB) $(OBJ_BONUS)

obli:
	$(NAME)

re: fclean all



.PHONY: all clean fclean bonus re