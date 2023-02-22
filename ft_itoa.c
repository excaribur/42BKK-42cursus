/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/22 18:07:29 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t len_number(int n)
{
	size_t	i;
	int		sign;

	if (n < 0)
		sign = -1;
	if (n == 0)
		return (0);
	n = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*digit;
	char	*ptr;

	digit = (char *)malloc(sizeof(char) * (INT_DIGIT + 1));
	if (digit == NULL)
		return (NULL);
	ptr = &digit[0] + INT_DIGIT + 1;
	*ptr = '\0';
	if (n == 0)
		*(--ptr) = '0';
	if (n >= 0)
	{
		while (n != 0)
		{
			*(--ptr) = '0' + (n % 10);
			n = n / 10;
		}
		return (ptr);
	}
	else
	{
		while (n != 0)
		{
			*(--ptr) = '0' - (n % 10);
			n = n / 10;
		}
		*--ptr = '-';
	}
	return (ptr);
}

/*
	define int digit, 19 character
	malloc string (count + sign + 1)
	give poiter point to adding null terminate location
	put each character into string by adding in back step
	if sign then add sign
	return pointer location
*/