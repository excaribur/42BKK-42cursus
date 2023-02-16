/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:32:19 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 08:58:49 by jphonyia         ###   ########.fr       */
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

#endif
