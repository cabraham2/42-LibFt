/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:15:39 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 03:31:46 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

///--------------------- IS SOMETHING ---------------------
int				ft_isdigit(int nb);
int				ft_islower(int nb);
int				ft_isupper(int nb);
int				ft_isalnum(int nb);
int				ft_isalpha(int nb);
int				ft_isprint(int nb);
int				ft_isascii(int nb);
int				ft_isspace(int nb);

int				ft_tolower(int nb);
int				ft_toupper(int nb);

///--------------------- PERSONAL ---------------------
int				ft_strlen(char const *str);
char			*ft_strcpy(char *dest, char *src);

///--------------------- STRING ---------------------
char			*ft_strnstr(char *str, char *to_find, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char const *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char const *src, unsigned int size);

///--------------------- FILE DIRECTOTY ---------------------
void			ft_putstr_fd(char *str, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *str, int fd);

///------------------------ MEMORY ------------------------
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
void			ft_bzero(void *s, size_t n);

///------------------------ MALLOC ------------------------
void			*ft_calloc(size_t nobj, size_t size);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_itoa(int n);

char			*ft_strdup(char *src);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_atoi(char *str);

///--------------------- BONUS ---------------------
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstsize(t_list *lst);
