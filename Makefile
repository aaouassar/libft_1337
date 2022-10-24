# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 20:40:23 by aaouassa          #+#    #+#              #
#    Updated: 2022/10/24 05:04:57 by aaouassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC =   ft_isalnum.c      \
        ft_isalpha.c      \
        ft_isdigit.c      \
        ft_isprint.c      \
        ft_memchr.c       \
        ft_memcmp.c       \
        ft_memmove.c      \
        ft_strlen.c       \
        ft_memset.c       \
        ft_isascii.c      \
        ft_bzero.c        \
        ft_memcpy.c       \
        ft_toupper.c      \
        ft_tolower.c      \
        ft_strchr.c       \
        ft_strrchr.c      \
        ft_strncmp.c      \
        ft_strlcpy.c      \
        ft_strnstr.c      \
        ft_atoi.c         \
        ft_calloc.c       \
        ft_strdup.c       \
        ft_substr.c       \
        ft_strjoin.c      \
        ft_strlcat.c      \
        ft_putchar_fd.c   \
        ft_putstr_fd.c    \
        ft_putnbr_fd.c    \
        ft_putendl_fd.c   \
        ft_strmapi.c      \
        ft_striteri.c     \
        ft_strtrim.c      \
        ft_itoa.c

GCC = gcc

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

RM = rm -f

LIB = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

.c.o : 
	$(GCC) $(FLAGS) -c $<

fclean : clean
	$(RM) $(NAME)
	
re : fclean all