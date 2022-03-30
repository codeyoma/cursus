# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:01:24 by yongmkim          #+#    #+#              #
#    Updated: 2022/03/01 22:18:05 by yongmkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

# 	Target Name
NAME		=	server

#	Compile
CC			=	gcc
CC_FLAG		=	-Wall -Wextra -Werror
RM			=	rm
RM_FLAG		=	-f
SNTZ		=	-g3 -fsanitize=address
PATH_B		=	./server_bonus/
HDR_M		=	-I.
HDR_B		=	-I.
OBJ			=	$(SRC:.c=.o)
OBJ_B		=	$(SRC_B:.c=.o)

#	Library
LIB_PATH	=	../libft/
LIB_FLAG	=	-L$(LIB_PATH) -lft
# PRIN_PATH	=	../libft/ft_printf/
# PRIN_FLAG	=	-L$(PRIN_PATH) -lftprintf

#	Source
SRC			=	server.c		\

SRC_B		=	server_bonus.c	\

#	Bonus
ifdef WITH_BONUS
	OBJECT	=	$(OBJ_B)
	DIR		=	$(HDR_B)
else
	OBJECT	=	$(OBJ)
	DIR		=	$(HDR_M)
endif

#	Sanitize
ifdef WITH_SNTZ
	CFLAG	=	$(CC_FLAG) $(SNTZ)
else
	CFLAG	=	$(CC_FLAG)
endif

#	Color
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
ORANGE		=	\e[38;5;214m
BLUE_PURPLE	=	\e[38;5;057m
PURPLE		=	\e[38;5;165m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(ORANGE)INFO$(RESET)]
_NAME		=	[$(YELLOW)$(NAME)$(RESET)]
#	$(_SUCCESS)
#	#(_INFO)

#	Make
all			:	$(NAME)

$(NAME)		:	$(OBJECT)
		@$(CC) $(CFLAG) $(LIB_FLAG) $(DIR) $(OBJECT) -o $(NAME)
#		@mv $(NAME) ../
		@printf "$(_SUCCESS) $(_NAME) - Make all done\n"

# %.o			:	%.c
# 		$(CC) $(CFLAG) -c $^ -o $@

clean		:
		@$(RM) $(RM_FLAG) $(OBJ) $(OBJ_B)
		@printf "$(_INFO) $(_NAME) - Make clean done\n"

fclean		:
		@$(RM) $(RM_FLAG) $(OBJ) $(OBJ_B) $(NAME)
#		@$(RM) ../$(NAME)
		@printf "$(_INFO) $(_NAME) - Make fclean done\n"

re			:	fclean all

bonus		:
		@make WITH_BONUS=1 all

sntz		:
		@make WITH_SNTZ=1 all

b			:	bonus

m			:	all

.PHONY		:	all clean fclean re bonus b m sntz
