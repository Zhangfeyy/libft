SRCS = \
	ft_isalpha.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c \
	ft_atoi.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
	ft_bzero.c ft_isdigit.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c \
	ft_calloc.c ft_isprint.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
	ft_isalnum.c ft_itoa.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = \
	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I. 
NAME = libft.a


all:$(NAME) 

$(NAME):$(OBJS)
	ar rcs $@ $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)


fclean:clean
	$(RM) $(NAME) 

re: fclean $(NAME)

bonus: re $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:all clean fclean re bonus
