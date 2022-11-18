NAME = libftprintf.a

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I .

MANDO = ft_printf.c \
		ft_print_unsigned.c \
		ft_print_str.c \
		ft_print_ptr.c \
		ft_print_percent.c \
		ft_print_nbr.c \
		ft_print_hex.c 

MANDOOBJ	= $(MANDO:.c=.o)

$(NAME): $(MANDOOBJ)
	make -C libft
	mv libft/libft.a $(NAME)
	@$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	@$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

clean:
	- @$(RM) $(MANDOOBJ)

fclean: clean
	- @$(RM) ${NAME}

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re