/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:25:05 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 17:54:34 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long *ptr;

	ptr = (unsigned long*)malloc(count * size);
	if(ptr)
		ft_bzero(ptr, count * size);
		
	return ((void *)ptr);
}