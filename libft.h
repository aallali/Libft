/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:57:41 by aallali           #+#    #+#             */
/*   Updated: 2018/10/25 13:35:24 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "unistd.h"
# include "stdlib.h"
# include "string.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
int					ft_atoi(const char *str);

char				*ft_strcat(char *dest, char *src);

int					ft_strcmp(const char *s1, const char *s2);

char				*ft_strcpy(char *dest, const char *src);

char				*ft_strdup(const char *src);

size_t				ft_strlcat(char *dest, const char *src, size_t size);

size_t				ft_strlen(const char *str);

char				*ft_strncat(char *dest, char *src, int nb);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strncpy(char *dest, const char *src, unsigned int n);

void				*ft_memset(void *b, int c, size_t len);

void				ft_bzero(void *s, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

void				*ft_memchr(const void *s, int c, size_t n);

char				*ft_strrchr(const char *s, int c);

char				*ft_strchr(const char *s, int c);

char				*ft_strstr(const char *haystack, const char *needle);

void				*ft_memalloc(size_t size);

char				*ft_strnstr(const char *s1, const char *s2, size_t n);

void				*ft_memalloc(size_t size);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				ft_memdel(void **ap);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_tolower(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_toupper(int c);

char				*ft_strnew(size_t size);

void				ft_strdel(char **as);

void				ft_strclr(char *s);

void				ft_striter(char *s, void (*f)(char*));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s);

char				**ft_strsplit(char const *s, char c);

void				ft_putchar(char c);

void				ft_putstr(char const *s);

void				ft_putendl(char const *s);

void				ft_putnbr(int n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				*ft_itoa(int n);

t_list				*ft_lstnew(const void *content, size_t content_size);

void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));

void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));

void				ft_lstadd(t_list **alst, t_list *new);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

char				*ft_capitalize(char *s);

int					ft_copyuntil(char **dst, char *src, char c);

int					ft_countwords(char const *str, char c);

void				ft_putnstr(char *str, int n);

void				*ft_realloc(void *ptr, size_t prev_size, size_t new_size);

char				*ft_strjoinch(char const *s1, char c);

#endif
