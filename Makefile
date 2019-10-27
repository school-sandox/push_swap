# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 22:14:41 by jmacgyve          #+#    #+#              #
#    Updated: 2019/10/28 00:00:47 by jmacgyve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PS = push_swap
NAME_CH = checker

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft

CH_SRCS = srcs/main.c\
	srcs/utils.c\
	srcs/utils_array.c\
	srcs/utils_check.c\
	srcs/utils_push.c \
	srcs/utils_revrotate.c\
	srcs/utils_rotate.c\
	srcs/utils_stack.c\
	srcs/utils_swap.c
		 
PS_SRCS = srcs/push_swap.c\
	srcs/utils.c\
	srcs/utils_array.c\
	srcs/utils_check.c\
	srcs/utils_push.c\
	srcs/utils_revrotate.c\
	srcs/utils_rotate.c\
	srcs/utils_stack.c\
	srcs/utils_swap.c \
	srcs/push_swap_algo.c\
	srcs/push_swap_integer.c\
	srcs/push_swap_movement.c\
	srcs/push_swap_rotation.c

INC = ft_push_swap.h

CH_OBJS = $(CH_SRCS:.c=.o)
PS_OBJS = $(PS_SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME_PS) $(NAME_CH)

$(NAME_CH):
	@make -C $(LIBFT)
	@ $(CC) $(FLAGS) -o $(NAME_CH) -Iinclude $(LIBFT)/libft.a $(CH_SRCS)

$(NAME_PS):
	@make -C $(LIBFT)
	@ $(CC) $(FLAGS) -o $(NAME_PS) -Iinclude $(LIBFT)/libft.a $(PS_SRCS)

clean:
	@rm -rf $(CH_OBJS) $(PS_OBJS)
	@make -C $(LIBFT) clean

fclean: clean
	@rm -rf $(NAME_PS) $(NAME_CH)
	@make -C $(LIBFT) fclean

re: fclean all