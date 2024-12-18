
SRCS =	ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c \
		ft_bzero.c ft_itoa.c ft_memset.c ft_strnstr.c \
		ft_calloc.c ft_putchar_fd.c ft_isalnum.c ft_putendl_fd.c \
		ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strncmp.c \
		ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_striteri.c \
		ft_isdigit.c ft_memcpy.c ft_split.c ft_strdup.c \
		ft_strmapi.c ft_toupper.c ft_strlen.c ft_tolower.c ft_strlcpy.c ft_substr.c \
		ft_strjoin.c ft_strrchr.c ft_strlcat.c ft_strtrim.c

SRCS_BONUS = 	ft_lstlast_bonus.c  ft_lstmap_bonus.c  ft_lstadd_back_bonus.c \
				ft_lstnew_bonus.c  ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstclear_bonus.c ft_lstdelone_bonus.c  ft_lstiter_bonus.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

so: $(OBJS) $(OBJS_BONUS)
	gcc -shared $^  -o libft.so


.PHONY: all clean fclean re bonus
