# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 18:50:25 by salmazro          #+#    #+#              #
#    Updated: 2022/06/09 18:50:29 by salmazro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = ft_printf.c\
ft_cs%.c\
ft_diu.c\
ft_xXp.c\
ft_utilities.c

OBJ_NAME = $(SRC_NAME:.c=.o)
CFLAG = -Wall -Wextra -Werror
NAME = libftprintf.a
${NAME}:
	gcc -c $(CFLAG) $(SRC_NAME)
	ar -rc $(NAME) $(OBJ_NAME)

all: ${NAME}

clean:
	rm -rf ${OBJ_NAME}
fclean: clean
	rm -f ${NAME}
re: fclean all
