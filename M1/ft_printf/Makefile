# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/05 13:15:26 by fejimene          #+#    #+#              #
#    Updated: 2026/10/05 13:20:30 by fejimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC = ft_printf \
		ft_conver \
		ft_putchar \
		ft_putnbr \
		ft_putunbr \
		ft_putstr \
		ft_puthex \
		ft_putptr 

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
# Main
all: $(NAME);
# Create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# Remove .o
clean:
	$(RM) $(OBJS)
# Remove .o and libft.a
fclean: clean
	$(RM) $(NAME)
# Recompile
re: fclean all
# Prevent conflict
.PHONY: all clean fclean re
