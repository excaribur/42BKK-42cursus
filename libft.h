/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:32:19 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/18 15:21:04 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>

int	ft_isalpha(int letter);
int	ft_isdigit(int letter);
int	ft_isalnum(int letter);
int	ft_isascii(int letter);
int	ft_isprint(int letter);
int	ft_tolower(int letter);
int	ft_toupper(int letter);
char *ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void *ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
void *ft_memmove(void *dst, const void *src, size_t len);
char *ft_strrchr(const char *s, int c);
size_t ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif
