/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:17:36 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 17:13:51 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	register char		*dst_cpy;
	register const char	*src_cpy;
	register size_t		n;
	size_t				dlen;

	dst_cpy = dst;
	src_cpy = src;
	n = dstsize;
	while (n-- != 0 && *dst_cpy != '\0')
		dst_cpy++;
	dlen = dst_cpy - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src_cpy));
	while (*src_cpy != '\0')
	{
		if (n-- != 1)
			*dst_cpy++ = *src_cpy;
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (dlen + (src_cpy - src));
}
