# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:35:24 by frgojard          #+#    #+#              #
#    Updated: 2022/05/23 14:31:39 by frgojard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a #donne un nom d'executable a mes fichier SRC.

CC = clang -Wall -Werror -Wextra

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
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \

BONUS_SRC = ft_lstnew_bonus.c \
            ft_lstadd_front_bonus.c \
            ft_lstsize_bonus.c \
            ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c \


OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME) test #all est une regle qui appelle une regle qui effectura la compilation en l'occurence $(NAME). 
		
.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ) #Cette regle effectue la compilation et faite un executable "prog" pour toute mes SRC.
	ar rc $(NAME) $(OBJ)

bonus: test $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

clean:	#Permet de delete toutles fichier objet.
	$(RM) $(OBJ)
	$(RM) main.o
	$(RM) $(BONUS_OBJ)

fclean:	clean #Permet de delete tout les executable "prog" ainsi que les .o grace a la au clean ecrit apresma regle fclean.
	$(RM) $(NAME)
	$(RM) prog

re: fclean test #Permet de tout recompiler de zero en supprimant tout les .o et .c.

test: all
	$(CC) -c main.c
	$(CC) main.o -L . -lft -o prog

valgrind: test
	valgrind --leak-check=full ./prog

.PHONY: all bonus clean fclean re