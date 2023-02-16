/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:10:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 13:18:51 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*_dst;
	unsigned char	*_src;

	_dst = (unsigned char *)dst;
	_src = (unsigned char *)src;
	if (_src == _dst || len == 0)
		return (dst);
	i = 0;
	while (i < len)
	{
		_dst[i] = _src[i];
		i++;
	}
	return (_dst);
}