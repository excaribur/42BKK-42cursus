/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:48:32 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 19:38:10 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	void *position;
	position = *s;


	return (position);
}

int main(){
	char *data = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	char *pos = ft_memchr(data, 'c', 7);
	print("%c\n", *pos);
}