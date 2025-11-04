NAME = libftprintf.a
SOURCES = printf.c helper_functions.c shorten1.c shorten2.c
OBJECTS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a


all: $(NAME)

$(NAME): $(OBJECTS) 
	@make -C $(LIBFT_DIR) all
	@cp $(LIBFT) .
	ar rcs $(NAME) $(OBJECTS) $(LIBFT_DIR)/*.o


%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_DIR) clean
	rm -f $(OBJECTS)

fclean:	clean
	@make -C $(LIBFT_DIR) fclean
	rm -f $(NAME) a.out libft.a

re:	fclean all

executable: $(NAME)
	@$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT_DIR)/*.o -o a.out

.PHONY:
	all clean fclean re

# NAME = libftprintf.a
# SOURCES = printf.c helper_functions.c shorten1.c shorten2.c
# OBJECTS = $(SOURCES:.c=.o)
# CC = cc
# CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
# LIBFT_DIR = libft
# LIBFT_SOURCES = libft/ft_substr.c libft/ft_strdup.c libft/ft_calloc.c libft/ft_strnstr.c libft/ft_memcmp.c libft/ft_strncmp.c \
# libft/ft_strlen.c libft/ft_strlcpy.c libft/ft_atoi.c libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
# libft/ft_isdigit.c libft/ft_isprint.c libft/ft_memchr.c libft/ft_memset.c libft/ft_strlcat.c libft/ft_tolower.c libft/ft_toupper.c \
# libft/ft_strrchr.c libft/ft_itoa.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c \
# libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_striteri.c libft/ft_strjoin.c \
# libft/ft_strmapi.c libft/ft_strtrim.c
# LIBFT_OBJECTS = $(LIBFT_SOURCES:.c=.o)


# all: $(NAME)

# $(NAME): $(OBJECTS) $(LIBFT_OBJECTS)
# 	ar rcs $(NAME) $(OBJECTS) $(LIBFT_OBJECTS)

# %.o: %.c ft_printf.h
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJECTS) $(LIBFT_OBJECTS)

# fclean:	clean
# 	rm -f $(NAME)

# re:	fclean all

# .PHONY:
# 	all clean fclean re 