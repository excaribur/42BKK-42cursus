/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:17:36 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 17:46:25 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	len;

	d = dst;
	s = (char *)src;
	len = dstsize;
	if (dstsize == 0)
		return (ft_strlen(dst) + ft_strlen(src));
	while (dstsize-- != 0 && *d != '\0')
		d++;
	while (dstsize-- != 0 && *s != '\0')
		*d++ = *s++;
	*d = '\0';
	return (len - ft_strlen(dst) + ft_strlen(src) - 1);
}


// #include <string.h>
// int main()
// {
// 	char	*dest;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	dest[14] = 'a';
// 	printf("%zu\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	printf("%s\n",dest);
// 	// printf("%zu\n",strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	// printf("%s\n",dest);
// }