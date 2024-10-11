# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 22:22:55 by janaebyrne        #+#    #+#              #
#    Updated: 2024/09/09 15:49:43 by jbyrne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iincl -g -fsanitize=address
LIBFT_PATH = srcs/libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = srcs/pipex.c srcs/utils.c srcs/main.c srcs/errors.c
OBJS = $(SRCS:.c=.o)
NAME = pipex

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
