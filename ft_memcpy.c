/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:10:12 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/18 15:41:06 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *ptr_dst;

	if (dst == src)
		return (dst);

	ptr_dst = (unsigned char *) dst;
	while (n-- > 0)
	{
		*(ptr_dst++) = *(unsigned char *)src++;
	}
	return (dst);
}