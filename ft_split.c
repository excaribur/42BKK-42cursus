/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:21:06 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/21 01:57:34 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*isstr(char const *s, char c)
{
	int	f;
	
	f = 0;
	while (*s)
	{
		if(*s != c)
			return ()
		s++;
	}
}

size_t len_arr(char const *s, char c)
{
	size_t	count;

	count = 0;
	while(*s)
	{
		if (isstr(s, c))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*ptr;
	size_t	n;

	ptr = ft_strdup(s);
	n = len_arr(s, c);
	arr = (char **)malloc(0);
	if (arr == NULL)
		return (NULL);
	while (n--)
	{
		if (1)
			break ;
		ptr = ft_memchr(ptr, c, ft_strlen(ptr));
		if(ptr)
			arr[0] = ptr;
	}
	return (arr);
}
