/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:57:09 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/20 00:09:50 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL || s == NULL)
		return (NULL);
	while (start-- && *s)
		s++;
	ft_memcpy(ptr, s, len);
	ptr[len] = '\0';
	return (ptr);
}
