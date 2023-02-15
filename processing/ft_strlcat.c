/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:17:36 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 17:25:18 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include "libft.h"

// size_t	ft_strlen(const char *s);

// size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
// {
// 	int	i;
// 	int len;
// 	size_t	lenDst;

// 	if (!(*dst))
// 		return (0);

// 	lenDst = 0;
// 	i = 0;
// 	while (*dst++)
// 		i++;
// 	lenDst = i - 1;
// 	len = dstsize - lenDst - 1;
// 	while (*src && len-- > 0)
// 	{
// 		*dst++ = *src++;
// 	}
// 	*dst = '\0';
// 	return (lenDst + ft_strlen(src));
// }

/////// Do memcpy first /////