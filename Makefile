# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eberkowi <eberkowi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:52:40 by eberkowi          #+#    #+#              #
#    Updated: 2024/05/16 12:24:56 by eberkowi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_printf.c ft_numbers.c ft_words.c
OBJECTS= $(SOURCES:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	 rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re