/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:48:49 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 10:39:46 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main() 
{
	char *str = "the cake is a lie ! I'm hidden lol";
	char dst[100] = "there is no stars in the sky";
	size_t size = strlen("the cake is a lie ! I'm hidden lol") + 4;
	

	printf("=======================\n");
	printf("before function strlcat\n");
	printf("=======================\n");
	printf("dst = %s\n", dst);
	printf("src = %s\n", str);
	printf("size = %zu\n", size);
	printf("lenght Dst = %zu\n", strlen(dst));
	printf("lenght Src = %zu\n", strlen(str));
	printf("lenght Src + lenght Dst = %zu\n", strlen(str) + strlen(dst));
	printf("lenght Src + size = %zu\n", strlen(str) + size);


/*
 * https://opensource.apple.com/source/Libc/Libc-262/string/strlcat.c.auto.html
 * Appends src to string dst of size siz (unlike strncat, siz is the
 * full size of dst, not space left).  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
 * Returns strlen(initial dst) + strlen(src); if retval >= siz,
 * truncation occurred.
 */
	size_t r2 = ft_strlcat(dst, str,size);
	printf("=======================\n");
	printf("after function strlcat\n");
	printf("=======================\n");
	printf("dst = %s\n", dst);
	printf("return value = %zu\n", r2);
	printf("lenght dst = %zu\n", r2);

	char *d = dst;
	d++;
	d++;
	printf("=======================\n");
	printf("test lenght\n");
	printf("=======================\n");
	printf("dst = %zu\n", strlen(dst));
	printf("d = %zu\n", strlen(d));
	printf("d - dst = %lu\n",strlen(dst) -strlen(d));
	printf("size - (d - dst) = %lu\n",size - (strlen(dst) -strlen(d)));
}