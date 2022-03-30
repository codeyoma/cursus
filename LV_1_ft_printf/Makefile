# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/26 11:18:14 by yongmkim          #+#    #+#              #
#    Updated: 2021/12/28 22:33:57 by yongmkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
LIBFT	=	libft
RM		=	rm -f
AR 		=	ar
ARFLAGS	=	rcus
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.c=.o)
OBJS_B	=	$(SRCS_B:.c=.o)

SRCS	=	ft_printf.c\
			workhorse.c\
			utils.c\

SRCS_B	=	ft_prinft_bonus.c\
			utils_bonus.c\
			workhorse_bonus.c\

ifdef WITH_BONUS
	OBJECTS = $(OBJS_B)
else
	OBJECTS = $(OBJS)
endif

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME) :	$(OBJECTS)
			$(AR) $(ARFLAGS) $@ $^

clean	:
#			$(MAKE) clean -C $(LIBFT)/
			$(RM) $(OBJECTS)

fclean	:	clean
#			$(RM) $(LIBFT)/$(LIBFT).a
			$(RM) $(NAME)

re		:	fclean all

bonus	:	all
#			$(MAKE) all -C $(LIBFT)/
#			cp $(LIBFT)/$(LIBFT).a $(NAME)
#			$(MAKE) WITH_BONUS=1 all
