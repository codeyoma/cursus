/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:50 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/21 15:31:15 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

# define NULLL ((void *)0)
# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2
# define FALSE 0
# define TRUE 1
# define SUCCESS 0
# define ERROR -1
# define FIND_DEL 1
# define JUST_DEL 2
# define MAX_INT 2147483647
# define MIN_INT -2147483648

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif
# define FT_DEL 0
# define FT_NEW 1
# define FT_ADD 2

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_dlist
{
	ssize_t			value;
	struct s_dlist	*next;
	struct s_dlist	*pre;
}				t_dlist;

/*
**	Get Next Line
*/
typedef struct s_gnl_list
{
	struct s_gnl_list	*next;
	char				*save_line;
	int					fd;
	ssize_t				read_size;
}						t_gnl_list;

/*
** Memory
*/
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t cnt, size_t size);

/*
** String
*/
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, \
												const char *needle, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
ssize_t			ft_putchar_fd(char c, int fd);
ssize_t			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
size_t			ft_nbr_width(ssize_t n);
int				ft_isspace(int c);

/*
**	Get Next Line
*/
char			*get_next_line(int fd);
int				ft_strchr_find_nl(char *s);
char			*ft_free(char **s1, char **s2, int keyword);

/*
** Singly Liked List
*/
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
														void (*del)(void *));

/*
** Doubly Linked List
*/
size_t			ft_dlist_size(t_dlist *lst);
t_dlist			*ft_dlist_new(ssize_t value);
void			ft_dlist_add_front(t_dlist **lst, t_dlist *add);
void			ft_dlist_add_back(t_dlist **lst, t_dlist *add);
t_dlist			*ft_dlist_last(t_dlist *lst);
t_dlist			*ft_dlist_find(t_dlist *lst, ssize_t value);
t_dlist			*ft_dlist_pick(t_dlist **lst, ssize_t value);
t_dlist			*ft_dlist_del(t_dlist **lst, ssize_t value, int key);
void			ft_dlist_del_all(t_dlist **head);

/*
** printf
*/
int				ft_printf(const char *str, ...);
int				ft_pf_process(va_list ap, char type);
char			ft_istype(char c);
int				ft_putchar_rt(char c);
int				ft_putstr_rt(char *str);

/*
** Sort or Algorithm
*/
int				ft_issort_des(ssize_t *nbr, ssize_t size);
int				ft_issort_asc(ssize_t *nbr, ssize_t size);

#endif
