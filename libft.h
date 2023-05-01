/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:49:38 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/30 21:16:43 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *str);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
char			*ft_strnstr(const char *big, const char *lit, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif
