# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 23:09:49 by pkabore           #+#    #+#              #
#    Updated: 2018/10/08 03:43:29 by pkabore          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc -Wall -Wextra -Werror
NAME = libft.a
HEADER= .

all:$(NAME)

$(NAME):
	@$(GCC) -c *.c -I $(HEADER)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean:clean
	@/bin/rm -f $(NAME)

re:fclean
	@make all
