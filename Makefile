# to find all the c files in the current dir
SRCS = $(filter-out %bonus%, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(filter %bonus%, $(wildcard *.c))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
RM = rm -f
# also find header files in the current dir for local header files
CFLAGS = -Wall -Wextra -Werror -I. 
NAME = libft.a

#all is to set the default target
all:$(NAME) 

$(NAME):$(OBJS)
	ar rcs $@ $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

#full clean
fclean:clean
	$(RM) $(NAME) 

re: fclean $(NAME)

bonus: re $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:all clean fclean re bonus
