/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:38:44 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/18 14:01:06 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize)
{
	int count;

	count = 0;
	while (*src)
	{
		if (dstsize > 1)
		{
			*dst++ = *src; 
			dstsize--;
		}
		src++;
		count++;
	}
	while (dstsize > 0 && *dst)
	{
		*dst++ = '\0';
	}
	return (count);
}