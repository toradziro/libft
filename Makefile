# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 01:35:10 by ehillman          #+#    #+#              #
#    Updated: 2020/11/02 20:51:03 by ehillman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRC =  	ft_isalnum.c\
		ft_itoa.c\
		ft_memmove.c\
		ft_putstr_fd.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_isalpha.c\
		ft_memccpy.c\
		ft_memset.c\
		ft_split.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_putchar_fd.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strtrim.c\
		ft_bzero.c\
		ft_isdigit.c\
		ft_memcmp.c\
		ft_putendl_fd.c\
		ft_strdup.c\
		ft_strmapi.c\
		ft_substr.c\
		ft_calloc.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_putnbr_fd.c\
		ft_strjoin.c\
		ft_strncmp.c\
		ft_tolower.c

BONUS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)
LIB = ar rc
RM = rm -f

all:	$(NAME)

$(NAME): $(OBJS)
		@$(LIB) $(NAME) $(OBJS) $^
		ranlib $(NAME)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
		@$(RM) $(NAME)

re:		fclean all

bonus:	$(NAME) $(OBJS_BONUS)
		@$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS) $^
		ranlib $(NAME)

.PHONY: all clean fclean re
