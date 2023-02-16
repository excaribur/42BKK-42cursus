/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:03:46 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 13:20:51 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	char *start;

	while (*s)
	{
		if (c == *s)
			start = (char *)s;
		s++;
	}
	return (start);
}