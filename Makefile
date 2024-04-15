NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
 ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
 ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
 ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
 ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
 ft_tolower.c ft_toupper.c ft_split.c

OBJ = $(SRC:.c=.o)
 
AR = ar -rc
 
all: $(NAME)
 
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all
 
.PHONY: all fclean clean re