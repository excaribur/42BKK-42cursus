CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
# SRCS =	ft_isalpha.c \
# 		ft_isdigit.c \
# 		ft_isalnum.c 
######################## Do not forget to add explicitly name in SRCS #############
OBJS = $(SRCS:.c=.o)
# INC = includes
NAME = libft.a
MKLIB = ar crs

all: $(NAME)

$(NAME):$(OBJS)
	$(MKLIB) $(NAME) $(OBJS)

$(OBJS): %.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
# $(CC) -c $(CFLAGS) $< -o $@ -I $(INC)

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all