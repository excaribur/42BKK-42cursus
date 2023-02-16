/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:48:32 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 10:33:52 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*position;

	position = (const char *) s;
	i = 0 ;
	while (i < n)
	{
		if (position[i] == c)
		{
			return ((void *)&position[i]);
		}
		i++;
	}
	return (0);
}
