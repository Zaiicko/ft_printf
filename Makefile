# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 01:07:41 by zaiicko           #+#    #+#              #
#    Updated: 2024/08/02 02:27:32 by zaiicko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INC_DIR = inc
INC = -I$(INC_DIR) -I$(LIBFT_DIR)dd
SRC_DIR = srcs
OBJ_DIR = obj
RM = rm -rf

SRCS =	ft_printf.c \
		ft_checking.c \
		ft_putchar_f.c \
		ft_putstr_f.c \
		ft_putun_f.c \
		ft_putnbr_f.c \
		ft_putpointer.c \
		ft_putnbase.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRCS))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: logo $(NAME) 

$(NAME):	$(OBJ) $(LIBFT)
		@cp $(LIBFT) $(NAME)
		@ar rcs $(NAME) $(OBJ)
$(LIBFT):
		@make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) $(OBJ_DIR)
			@make clean -C $(LIBFT_DIR)

fclean: clean
		@$(RM) $(NAME)
		@make fclean -C $(LIBFT_DIR)

re:		fclean all

logo:
	@echo "\033[31m"
	@echo "                                                                                   "
	@echo "     _|_|    _|                                  _|              _|          _|_|  "
	@echo "   _|      _|_|_|_|          _|_|_|    _|  _|_|      _|_|_|    _|_|_|_|    _|      "
	@echo " _|_|_|_|    _|              _|    _|  _|_|      _|  _|    _|    _|      _|_|_|_|  "
	@echo "   _|        _|              _|    _|  _|        _|  _|    _|    _|        _|      "
	@echo "   _|          _|_|          _|_|_|    _|        _|  _|    _|      _|_|    _|      "
	@echo "                             _|                                                    "
	@echo "                 _|_|_|_|_|  _|                                                    "
	@echo "                                                                                   "

.PHONY:	fclean re all clean logo
