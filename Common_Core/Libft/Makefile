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

.SILENT:
NAME := libft.a
#File to be created after running this script.

SRCS =  ft_strtrim.c     ft_atoi.c         ft_isprint.c    ft_strlen.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c\
		ft_putendl_fd.c  ft_putnbr_fd.c    ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c        ft_split.c        ft_strjoin.c     ft_substr.c\
		ft_strmapi.c     ft_striteri.c     ft_calloc.c      ft_strdup.c\
		ft_memchr.c      ft_memcmp.c       ft_memset.c      
		
BONUS = ft_lstnew.c       ft_lstsize.c      ft_lstlast.c      ft_lstiter.c\
	ft_lstdelone.c    ft_lstclear.c     ft_lstmap.c\
	ft_lstadd_front.c ft_lstadd_back.c 
	#Sources {files} to be compiled by this script.

SRCS_O	:= ${SRCS:.c=.o}
BONUS_O := ${BONUS:.c=.o}
OBJS := ${SRCS_O} ${BONUS_O} 
#Sets a list of SRC files {.c} changed to {.o}.
	
CC := cc
RM := /bin/rm -rf 
#command to forcing remove the directories without user confirmation.
CFLAGS := -Wall -Wextra -Werror -I*.h
#alias from 'CC' adding the flags.

AR := ar -rc #create a file with the object files {.o} - Sintax: "ar rc library.a ft_1.o ft2.o".
RL := ar -s #create a index for the static library.

${NAME}: ${SRCS_O}
	${AR} ${NAME} ${SRCS_O}
	${RL} ${NAME}
	echo 'Mandatory Ok'
#adding the OBJS inside the library.

all: ${NAME} 
#setting the default target if running make or make all will compile the source codes and create the libft.a {NAME}.

bonus: ${BONUS_O}
	${AR} ${NAME} ${BONUS_O}
	${RL} ${NAME}
	echo 'Bonus Ok'

clean:
	${RM} ${OBJS}
	echo 'Objects removed'
#removing all .o files created.

fclean: clean
	${RM} ${NAME}
	echo 'Static library removed'
#removing all .o files created AND the libft.a file created.

re: fclean all
#removes everything with the fclean command and creates everything again will all command.

norm:
	echo 'Running Norminette'
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

author: 
	echo 'uviana-a'

.PHONY: clean fclean norm all bonus re author
#declaring these targets as .PHONY will force the command even if it's some subdirectory or file with it's name.
