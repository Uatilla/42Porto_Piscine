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
NAME := libftprintf.a
#File to be created after running this script.

SRCS =  ft_itoa.c     ft_printf.c         ft_printf_func.c
	#Sources {files} to be compiled by this script.

SRCS_O	:= ${SRCS:.c=.o}
OBJS := ${SRCS_O}
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

.PHONY: clean fclean norm all re author
#declaring these targets as .PHONY will force the command even if it's some subdirectory or file with it's name.
