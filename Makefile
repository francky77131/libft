# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:35:24 by frgojard          #+#    #+#              #
#    Updated: 2022/05/12 11:47:53 by frgojard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a #donne un nom d'executable a mes fichier SRC.

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3

RM = rm -f

SRC = 	ft_strncmp.c \
		ft_strlen.c  \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_memchr.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \

OBJS = $(SRC:.c=.o)

all: $(NAME) test #all est une regle qui appelle une regle qui effectura la compilation en l'occurence $(NAME). 
		
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) #Cette regle effectue la compilation et faite un executable "prog" pour toute mes SRC.
	ar rcs $(NAME) $(OBJS) 

clean:	#Permet de delete toutles fichier objet.
	$(RM) $(OBJS)
	$(RM) main.o

fclean:	clean #Permet de delete tout les executable "prog" ainsi que les .o grace a la au clean ecrit apresma regle fclean.
	$(RM) $(NAME)
	$(RM) prog

re: fclean test #Permet de tout recompiler de zero en supprimant tout les .o et .c.

test: all
	$(CC) $(CFLAGS) -c main.c
	$(CC) $(CFLAGS) main.o	-L . -lft -o prog

valgrind: test
	valgrind --leak-check=full ./prog

.PHONY: all clean fclean re