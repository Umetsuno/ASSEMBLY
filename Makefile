# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/03 15:12:13 by faherrau          #+#    #+#              #
#    Updated: 2021/05/07 14:51:33 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# Colors
GREY = \033[4;34m
RED = \033[1;31m
GREEN = \033[3;32m
YELLOW = \033[2;49;33m
BLUE = \033[4;34m
BLUEE = \033[3;34m
PURPLE = \033[3;35m
CYAN = \033[3;36m
RESET = \033[0m
ICONOK = \033[1;32m
ICONKO = \033[1;31m
CO_DELET = \033[3;31m
CO_A_OUT = \033[96m
WHITE = \033[1;49;97m

SRCS		=	main.c

SRC_S		=	ft_strlen.s \
				ft_strcpy.s \
				ft_strdup.s \
				ft_strcmp.s \
				ft_write.s \
				ft_read.s

NAME		= 	libasm.a

CFLAGS		= 	-Wall -Wextra -Werror

INCLUDES	= 	-Iincludes 

OBJS		= 	$(SRCS:.c=.o) $(SRC_S:.s=.o)

GCC			= 	gcc

NASM		= 	/Users/faherrau/homebrew/bin/nasm -fmacho64

RM			= 	@rm -f

all:			$(NAME)

%.o:			%.s
				@$(NASM) $<
				@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(PURPLE)$<$(RESET)"

%.o:			%.c
				@$(GCC) $(CFLAGS) -c $< -o $@
				@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(PURPLE)$<$(RESET)"

$(NAME): 		$(OBJS)
				@$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)
				@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(ICONOK)Compiled √$(RESET)\n"

bsh:	
		@./$(NAME)
		

clean:
				$(RM) $(OBJS)
				@printf "\033[2K\r$(CYAN)cleaning$(RESET)$(BLUEE): $(ICONOK)Complete √$(RESET)\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean	all

ImaWiseMan:		re	bsh

.PHONY:			make all clean fclean re exe
