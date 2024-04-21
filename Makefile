# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 01:07:41 by zaiicko           #+#    #+#              #
#    Updated: 2024/04/21 03:38:07 by zaiicko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INC_DIR = inc
INC = -I$(INC_DIR) -I$(LIBFT_DIR)

SRCS = 

SRC = $(addprefix srcs/, $(SRCS))

OBJ = $(SRC:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME):	$(OBJ)
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
			$(RM) $(OBJ)
			make clean -C libft

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft

re:		fclean all

.PHONY:	fclean re all clean