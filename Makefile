CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_memcpy.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_putchar_fd.c ft_memset.c ft_strdup.c ft_memcmp.c \
		 ft_strlen.c ft_tolower.c ft_strchr.c ft_toupper.c ft_memmove.c ft_strncmp.c ft_isalpha.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 
#ar = archive files & rc = flags (r = insert avec remplacement, c = crée l'archive, visiblement bonne habitude de mettre s = indexe l'archive)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
