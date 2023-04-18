/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:53:34 by fernacar          #+#    #+#             */
/*   Updated: 2023/04/15 21:05:18 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

/** Allocates (with malloc(3)) and returns a new node. The member variable 
 * ’content’ is initialized with the value of the parameter ’content’. The 
 * variable ’next’ is initialized to NULL. */
t_list	*ft_lstnew(void *content);

/** Adds the node ’new’ at the beginning of the list. */
void	ft_lstadd_front(t_list **lst, t_list *new);

/** Counts the number of nodes in a list. */
int		ft_lstsize(t_list *lst);

/** Returns the last node of the list. */
t_list	*ft_lstlast(t_list *lst);

/** Adds the node ’new’ at the end of the list. */
void	ft_lstadd_back(t_list **lst, t_list *new);

/** Takes as a parameter a node and frees the memory of the node’s content
 *  using the function ’del’ given as a parameter and free the node. The memory
 *  of ’next’ must not be freed. */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/** Deletes and frees the given node and every successor of that node, using 
 * the function ’del’ and free(3). Finally, the pointer to the list must be set 
 * to NULL. */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/** Iterates the list ’lst’ and applies the function ’f’ on the content of each 
 * node. */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/** Iterates the list ’lst’ and applies the function ’f’ on the content of each 
 * node. Creates a new list resulting of the successive applications of the 
 * function ’f’. The ’del’ function is used to delete the content of a node if 
 * needed. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif