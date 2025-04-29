# to find all the c files in the current dir
SRCS = $(filter-out %bonus%, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(filter %bonus%, $(wildcard *.c))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I # also find header files in the current dir for local header files
NAME = libft.a

all:$(NAME) #all is to set the default target

$(NAME):$(OBJS)
	ar rcs $@ $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

#full clean
fclean:clean
	$(RM) $(NAME) 

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $^

.PHONY:all clean fclean re bonus