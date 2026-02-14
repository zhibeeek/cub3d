# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzhyrgal <zzhyrgal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 21:46:55 by zzhyrgal          #+#    #+#              #
#    Updated: 2026/02/03 13:27:39 by zzhyrgal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes

SRCS: main.c \
LIBFT_SRCS =

OBJS = $(SRCS:.c=.o)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

