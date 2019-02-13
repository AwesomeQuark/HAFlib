# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: conoel <conoelstudent.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 13:53:47 by conoel            #+#    #+#              #
#    Updated: 2019/02/13 17:41:55 by conoel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = src/libft.h
SRCNAME = ft_bzero.c ft_memcpy.c ft_memccpy.c ft_iscntrl.c ft_isgraph.c \
ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c ft_strlen.c \
ft_strdup.c ft_strcpy.c ft_strncpy.c ft_islower.c ft_isupper.c \
ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isspace.c ft_isalpha.c \
ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strnew.c ft_strdel.c\
ft_strclr.c ft_strsub.c \
ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c \
ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_isspace.c ft_isblank.c ft_memset.c quit.c\
ft_strtoll.c get_the_file.c print_char_str.c free_tab.c
SRCDIR = src/
SRCS = ${addprefix $(SRCDIR), $(SRCNAME)}

OBJNAME = $(SRCNAME:.c=.o)
OBJDIR = obj/
OBJ = ${addprefix $(OBJDIR), $(OBJNAME)}

FLAG = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME) : $(OBJDIR) $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[1m\033[4m\033[35m/!\ Done compilate /!\\\\\033[0m [$(NAME)]"

$(OBJDIR)%.o: $(SRCDIR)%.c $(HEADER)
	@clang $(FLAGS) -c $< -o $@ -I$(HEADER)
	@echo "\033[32m\033[1m\033[4mCompilating\033[0m\033[32m : $@\033[0m [$(NAME)]";

$(OBJDIR):
	@mkdir $(OBJDIR)
	@echo "\n>========= * \033[32m\033[1mCreating $(NAME) obj dir\033[0m * =========<\n";

clean :
	@rm -rf $(OBJDIR)

fclean : clean
	@rm -f $(NAME)
	@echo "\033[31m\033[1m\033[4mCleaning\033[0m\033[31m : Everything\033[0m [$(NAME)]";

re : fclean all
