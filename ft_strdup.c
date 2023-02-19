/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:54:55 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 18:14:14 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char *ptr;

	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if(ptr)
	{
		ptr = (char *)ft_memcpy(ptr, s1, len);
	}
	return (ptr);
}