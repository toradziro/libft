NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -c
SOFLAGS = -Wall -fPIC -c
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
		ft_tolower.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c
OBJS = $(SRC:.c=.o)
LIB = ar rc

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRC) libft.h
		$(LIB) $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME) libft.h.gch
		
re:		fclean all

so: 
		$(CC) $(SOFLAGS) $(SRC) libft.h
		$(CC) -shared -o libft.so $(OBJS)
