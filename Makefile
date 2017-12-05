# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/01 16:06:49 by liadelai     #+#   ##    ##    #+#        #
#    Updated: 2017/12/04 15:39:08 by liadelai    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a

PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

FILES =   ft_atoi.c ft_putchar_fd.c ft_strmap.c ft_bzero.c ft_putendl.c ft_strmapi.c\
ft_count_chars.c ft_putendl_fd.c ft_strncat.c ft_count_chars_c.c\
ft_putnbr.c ft_strncmp.c ft_count_words.c ft_putnbr_fd.c ft_strncpy.c ft_count_words_c.c\
ft_putstr.c ft_strnequ.c ft_isalnum.c ft_putstr_fd.c ft_strnew.c ft_isalpha.c\
ft_split_whitespaces.c ft_strnstr.c ft_isascii.c ft_strcat.c ft_strrchr.c ft_isdigit.c\
ft_strchr.c ft_strsplit.c ft_isprint.c ft_strclr.c ft_strstr.c ft_itoa.c ft_strcmp.c\
ft_strsub.c ft_memalloc.c ft_memdel.c ft_striteri.c ft_memmove.c ft_memcpy.c\
ft_striter.c ft_strjoin.c ft_strcpy.c ft_strtrim.c ft_memccpy.c ft_strdel.c ft_tolower.c\
ft_memchr.c ft_strdup.c ft_toupper.c ft_memset.c ft_strlcat.c ft_putchar.c ft_strlen.c\
ft_memcmp.c ft_strequ.c\

SRC = $(addprefix $(PATH_SRC), $(FILES))
OBJ = $(addprefix $(PATH_OBJ), $(FILES:.c=.o))
INC = $(PATH_INC)libft.h
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ar rcs $(NAME) $(OBJ)
	@echo "🦄 🦄 🦄 \033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m🦄 🦄 🦄"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@echo "\033[1;34mLibft\t\t\033[1;33mCOMPILATION $@\t\033[0;32m[OK]\033[0m"
	@$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
