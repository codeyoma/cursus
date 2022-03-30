# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 16:38:33 by yongmkim          #+#    #+#              #
#    Updated: 2022/03/01 22:13:04 by yongmkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

#	Target Name
NAME 		=	libft.a

#	Compile
CC 			=	gcc
CC_FLAG		=	-Wall -Wextra -Werror
RM			=	rm
RM_FLAG		=	-f
AR			=	ar
AR_FLAG		=	rcus
OBJ 		=	$(SRC:.c=.o)
OBJ_B		=	$(SRC_BN:.c=.o)

#	Library
# PRIN_DIR	=	./ft_printf/

#	Source
SRC			=	ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_strlen.c			\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_strchr.c			\
				ft_strnstr.c		\
				ft_strncmp.c		\
				ft_strdup.c			\
				ft_strrchr.c		\
				ft_memset.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_bzero.c			\
				ft_atoi.c			\
				ft_calloc.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_strdup.c			\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_printf.c			\
				ft_pf_process.c		\
				ft_istype.c			\
				ft_putstr_rt.c		\
				ft_putchar_rt.c		\

SRC_BN		=	ft_lstnew.c			\
				ft_lstsize.c		\
				ft_lstadd_front.c	\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

#	Bonus
ifdef WITH_BONUS
	OBJECT	=	$(OBJ) $(OBJ_B)
else
	OBJECT	=	$(OBJ)
endif

#	Custom
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
ORANGE		=	\e[38;5;214m
BLUE_PURPLE	=	\e[38;5;057m
PURPLE		=	\e[38;5;165m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(ORANGE)INFO$(RESET)]
_NAME		=	[$(PURPLE)$(NAME)$(RESET)]
SHELL		=	/bin/bash
SP 			=	/-\|/
IDX			=	0
#	$(_SUCCESS)
#	#(_INFO)

#	Make
all			:	$(NAME)

$(NAME)		:	$(OBJECT)
# 		@$(MAKE) -C	$(PRIN_DIR)
		$(AR) $(AR_FLAG) $@ $^
		@printf "$(_SUCCESS) $(_NAME) - Make all done\n"

# %.o 		:	%.c
# 		$(eval IDX = $(SHELL expr $(IDX) + 1))
# 		$(eval T_IDX = $(SHELL expr $(IDX) % 4 + 1))
# 		$(eval CHR = $(SHELL echo $(SP) | cut -c $(T_IDX)))
# 		@if [ $(IDX) = 1 ]; then\
# 			echo -n "Loading ... ";\
# 		fi
# 		@printf "\b$(CHR)"
# 		$(CC) $(CC_FLAG) -c $^ -o $@

clean		:
# 		@$(MAKE) -C	$(PRIN_DIR) clean
		$(RM) $(RM_FLAG) $(OBJ) $(OBJ_B)
		@printf "$(_INFO) $(_NAME) - Make clean done\n"

fclean		:
# 		@$(MAKE) -C	$(PRIN_DIR) fclean
		$(RM) $(RM_FLAG) $(OBJ) $(OBJ_B) $(NAME)
		@printf "$(_INFO) $(_NAME) - Make fclean done\n"

re			:	fclean all

bonus		:
		@make WITH_BONUS=1 all

b			: bonus

m			: all

.PHONY : all clean fclean re bonus
