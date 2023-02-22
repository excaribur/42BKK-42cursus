/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/22 18:33:31 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t len_number(int n)
{
	return (0);
}

char	*ft_positive(ptr, n)
{
	return (NULL);
}

char	*ft_negative(ptr, n)
{
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	i;

	i = len_number(n);
	ptr = (char *)malloc(sizeof(char) * (1));
	if (ptr == NULL)
		return (NULL);
	if (n > 0)
		return (ft_positive(ptr, n));
	if (n < 0)
		return (ft_negative(ptr, n));
	return (ft_o(ptr, n));
}
