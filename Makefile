# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emikhayl <emikhayl@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 21:42:09 by emikhayl          #+#    #+#              #
#    Updated: 2023/09/27 19:51:52 by emikhayl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

SOURCES = ft_isalpha.c  ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
		  ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		  ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
		  ft_memset.c ft_bzero.c ft_memmove.c ft_memcpy.c ft_memchr.c \
		  ft_memcmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		  ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c ft_lstnew.c ft_lstadd_front.c \
		  ft_lstsize.c 

BONUS_SOURCES = ft_lstnew.c

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

COMPILER = gcc

CFLAGS = -Wall -Wextra -Werror

# Metodo implicito
%.o: %.c	$(INCLUDES) Makefile
	$(COMPILER) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

# Mis metodos
all: 	$(NAME)

$(NAME): $(OBJECTS) 
	ar -rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJECTS)
	ar -rcs $(NAME) $(BONUS_OBJECTS)

# Explicit rule for bonus object files
$(BONUS_OBJECTS): $(BONUS_SOURCES) $(INCLUDES) Makefile
	$(COMPILER) $(CFLAGS) -I $(INCLUDES) -c $(BONUS_SOURCES) -o $@

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
