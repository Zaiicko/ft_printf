# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 01:07:41 by zaiicko           #+#    #+#              #
#    Updated: 2024/04/21 02:08:40 by zaiicko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = 

SRC = $(addprefix srcs/, $(SRCS))

OBJ = $(SRC:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $@ -I$(LIBFT_DIR)/includes

$(NAME):	$(OBJ)
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJ)
			ranlib $(NAME)

all:	$(NAME)

clean:
			$(RM) $(OBJ)
			make clean -C libft

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft

re:		fclean all

.PHONY:	fclean re all clean