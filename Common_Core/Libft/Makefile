# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 20:30:00 by uviana-a          #+#    #+#              #
#    Updated: 2023/04/18 20:30:02 by uviana-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror #alias from 'CC' adding the flags.
AR = ar rc #create a file with the object files (.o) - Sintax: "ar rc library.a ft_1.o ft2.o".
RM = rm -rf #command to forcing remove the directories without user confirmation.
NAME = libft.a #File to be created after running this script.
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_toupper.c \
		#ft_tolower.c ft_strchr.c\
		#ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		#ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		#ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		#ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
		#Sources (files) to be compiled by this script.
		
OBJS = $(SRCS:.c=.o) #Sets a list of SRC files (.c) changed to (.o).

BONUS_SRCS = #ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			#ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			#ft_lstmap.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME) 
#setting the default target if running make or make all will compile the source codes and create the libft.a (NAME).

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
#adding the OBJS inside the library.

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
#Adding the OBJS and BONUS_OBJS inside the library.

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
#removing all .o files created.

fclean: clean
	$(RM) $(NAME)
#removing all .o files created AND the libft.a file created.

re: fclean all
#removes everything with the fclean command and creates everything again will all command.

.PHONY: all clean fclean re
#declaring these targets as .PHONY will force the command even if it's some subdirectory or file with it's name.
