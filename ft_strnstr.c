/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:18:39 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 23:59:15 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_stack;
	size_t	len_nd;

	len_nd = ft_strlen(needle);
	if (*needle == 0 || len == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		len_stack = ft_strlen(haystack);
		if (len_stack < 1 || len < len_stack)
			return (NULL);
		if (ft_strncmp(needle, haystack, len_nd) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
