CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g
NAME	= push_swap
HEADER	= push_swap.h
PRINTF	= ft_printf/libftprintf.a
LIBFT	= libft/libft.a
SRCS	= \
push_swap.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) $(LIBFT) $(PRINTF)

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
