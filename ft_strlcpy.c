/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:38:44 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/20 00:09:40 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	count;

	count = 0;
	while (*src)
	{
		if (dstsize > 1 && *dst)
		{
			*dst++ = *src;
			dstsize--;
		}
		src++;
		count++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (count);
}
