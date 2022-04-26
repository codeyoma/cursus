# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 16:14:43 by yongmkim          #+#    #+#              #
#    Updated: 2022/04/26 21:34:13 by yongmkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==================================
# 	Target Name
#==================================
NAME		=	fdf

#==================================
#	Source
#==================================
SRC			=	main.c	\
				error.c	\
				map.c	\
				util.c	\
				util_map.c	\
				key.c	\
				render.c	\
				project.c	\
				draw.c	\


SRC_B		=		\

#==================================
#	Directory
#==================================
SRC_DIR		=	./source/
INC_DIR		=	./include/
OBJ_DIR		=	./object/
OBJ			=	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))
OBJ_B		=	$(addprefix $(OBJ_DIR), $(SRC_B:.c=.o))

#==================================
#	Library
#==================================
LIB_DIR		= 	./library/
LIB_LNK		=	$(LIBFT_LNK) $(MLX_LNK) -l m
LIB_INC		=	$(LIBFT_INC) $(MLX_INC) -I $(INC_DIR)
HDR_INC		=	$(LIB_INC) 
###	libft
LIBFT_DIR	=	$(LIB_DIR)libft/
LIBFT_INC	=	-I $(LIBFT_DIR)
LIBFT_LNK	=	-L $(LIBFT_DIR) -l ft
###	mlx
MLX_DIR 	=	$(LIB_DIR)mlx_mms/
MLX_INC		=	-I $(MLX_DIR)
MLX_LNK		=	-L $(MLX_DIR) -l mlx -framework OpenGL -framework AppKit

#==================================
#	Compile
#==================================
CC			=	gcc
#CC_FLAG		=	-Wall -Wextra -Werror
CC_FLAG		=	
CFLAG		=	$(CC_FLAG)
RM			=	rm
RM_FLAG		=	-f
SNTZ		=	-g -fsanitize=address
DEBUG		=	-g

#==================================
#	Bonus
#==================================
ifdef WITH_BONUS
	OBJECT	=	$(OBJ) $(OBJ_B)
else
	OBJECT	=	$(OBJ)
endif

#	Sanitize

#	Debug : -g
ifdef WITH_DEBUG
	CFLAG	=	$(CC_FLAG) $(DEBUG)
else
	CFLAG	=	$(CC_FLAG)
endif

#==================================
#	Color
#==================================
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
ORANGE		=	\e[38;5;214m
BLUE_PURPLE	=	\e[38;5;057m
PURPLE		=	\e[38;5;165m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(ORANGE)INFO$(RESET)]
_NAME		=	[$(GREEN)$(NAME)$(RESET)]
_CLEAN		=	[$(BLUE_PURPLE)$(NAME)$(RESET)]
_NAME_B		=	[$(GREEN)$(NAME_B)$(RESET)]
_PROG		=	$(_INFO) [$(ORANGE)$(NAME)$(RESET)] - Compile $(YELLOW)
_DONE		=	$(GREEN)✓$(RESET)

#	Loading bar
SHELL	=	/bin/bash
sp		=	/-\|/
idx		=	0



#==============================================================================
#	Make  
#==============================================================================
all			:	obj_dir $(NAME)

obj_dir		:
		@mkdir -p $(OBJ_DIR)

lib_make	:
		@$(MAKE) -C $(LIB_DIR)

lib_clear	:
		@$(MAKE) -C $(LIB_DIR) clean

lib_fclear	:
		@$(MAKE) -C $(LIB_DIR) fclean

$(NAME)		:	lib_make $(OBJECT)
		@if [ $(idx) -gt 0 ]; then\
			printf "\b$(_DONE)\n";\
		fi
		@$(CC) $(CFLAG) $(LIB_LNK) $(OBJECT) -o $(NAME)
		@printf "$(_SUCCESS) $(_NAME) - all $(_DONE)\n"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c $(INC_DIR)
		$(eval idx = $(shell expr $(idx) + 1))
		$(eval t_idx = $(shell expr $(idx) % 4 + 1))
		$(eval chr = $(shell echo $(sp) | cut -c $(t_idx)))
		@if [ $(idx) = 1 ]; then\
			printf "   $(_PROG) ";\
		fi
		@printf "\b$(chr)"
		@$(CC) $(CC_FLAG) $(LIB_INC) -o $@ -c $<

clean		:
		@$(RM) -rf $(OBJ_DIR)
		@make lib_clear
		@$(RM) $(RM_FLAG) $(OBJECT) $(OBJ_B)
		@printf "   $(_INFO) $(_CLEAN) - clean $(_DONE)\n"

fclean		:
		@$(RM) -rf $(OBJ_DIR)
		@make lib_fclear
		@$(RM) $(RM_FLAG) $(OBJECT) $(OBJ_B) $(NAME)
		@printf "   $(_INFO) $(_CLEAN) - fclean $(_DONE)\n"

re			:	fclean all

bonus		:
		@make WITH_BONUS=1 all

sntz		:	lib_make $(OBJECT)
		@if [ $(idx) -gt 0 ]; then\
			printf "\b$(_DONE)\n";\
		fi
		@$(CC) $(CFLAG) $(SNTZ) $(LIB_LNK) $(OBJECT) -o $(NAME)
		@printf "   $(_INFO) $(_NAME) - sntz $(_DONE)\n"

debug		:	lib_make $(OBJECT)
		@if [ $(idx) -gt 0 ]; then\
			printf "\b$(_DONE)\n";\
		fi
		@$(CC) $(CFLAG) $(DEBUG) $(LIB_LNK) $(OBJECT) -o $(NAME)
		@printf "   $(_INFO) $(_NAME) - debug $(_DONE)\n"

lldb		:	debug

b			:	bonus

m			:	all

clear		:	clean

fclear		:	fclean

show		:
		@printf "NAME	: $(NAME)\n"
		@printf "CC	: $(CC)\n"
		@printf "CC_FLAG	: $(CC_FLAG)\n"
		@printf "SRC_DIR	: $(SRC_DIR)\n"
		@printf "OBJ_DIR	: $(OBJ_DIR)\n"
		@printf "INC_DIR	: $(INC_DIR)\n"
		@printf "LIB_DIR	: $(LIB_DIR)\n"
		@printf "LIB_INC	: $(LIB_INC)\n"
		@printf "LIB_LNK	: $(LIB_LNK)\n"
		@printf "SRC	: $(SRC)\n"

list		:	show

.PHONY		:	all clean fclean re bonus b m sntz debug lldb clear obj_dir \
				lib_make lib_clear lib_fclear show list \
