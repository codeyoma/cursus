# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 18:25:02 by yongmkim          #+#    #+#              #
#    Updated: 2022/03/01 13:25:35 by yongmkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

#	bash  ======================================================================
# #!/bin/bash
# #max pid shell script
# # $! 최근에 실행한 백그라운드(비동기) 명령의 PID
# pid=0
# for i in {1..100000}; do
#   : &
#   if [ $! -lt $pid ]; then
#     echo "Min pid: $!"
#     echo "Max pid: $pid"
#     break
#   fi
#   pid=$!
# done
#===============================================================================

#	Target Name
NAME		=	minitalk

#	Make Directory
LIBFT_DIR	=	./libft/
CLI_DIR		=	./client_src/
SRV_DIR		=	./server_src/

#	Color
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
ORANGE		=	\e[38;5;214m
BLUE_PURPLE	=	\e[38;5;057m
PURPLE		=	\e[38;5;165m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(ORANGE)INFO$(RESET)]
_NAME		=	[$(GREEN)$(NAME)$(RESET)]
_NAME_B		=	[$(GREEN)$(NAME)_bonus$(RESET)]
#	$(_SUCCESS)
#	#(_INFO)

#	Make
all			:
		@$(MAKE) -C $(LIBFT_DIR)
		@$(MAKE) -C	$(CLI_DIR)
		@$(MAKE) -C	$(SRV_DIR)
		@printf "$(_SUCCESS) $(_NAME) - Make all done\n"

bonus		:
		@$(MAKE) -C $(LIBFT_DIR)
		@$(MAKE) -C	$(CLI_DIR) bonus
		@$(MAKE) -C	$(SRV_DIR) bonus
		@printf "$(_SUCCESS) $(_NAME_B) - Make all done\n"

clean		:
		@$(MAKE) -C $(LIBFT_DIR) clean
		@$(MAKE) -C	$(CLI_DIR) clean
		@$(MAKE) -C	$(SRV_DIR) clean
		@printf "$(_INFO) $(_NAME) - Make clean done\n"

fclean		:
		@$(MAKE) -C $(LIBFT_DIR) fclean
		@$(MAKE) -C	$(CLI_DIR) fclean
		@$(MAKE) -C	$(SRV_DIR) fclean
		@printf "$(_SUCCESS) $(_NAME) - Make fclean done\n"

re			:	fclean all

b			:	bonus

m			:	all

sntz		:
		@$(MAKE) -C $(LIBFT_DIR)
		@$(MAKE) -C	$(CLI_DIR) sntz
		@$(MAKE) -C	$(SRV_DIR) sntz
		@printf "$(_SUCCESS) $(NAME) with SNTZ - Make all done\n"

.PHONY		:	all clean fclean re b m sntz
