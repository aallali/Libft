# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 15:09:56 by aallali           #+#    #+#              #
#    Updated: 2018/10/10 16:17:45 by aallali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_O = *.o
SRC_C = *.c
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	gcc $(FLAG) -c $(SRC_C)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean :
	@/bin/rm -f $(SRC_O)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
