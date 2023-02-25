/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 02:02:56 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 18:55:00 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count(int n)
{
	unsigned int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;

	if (n == 0)
		ft_putchar_fd('0', fd);
	i = count(n);
	if (n < 0)
	{
		n = n + 1;
		ft_putchar_fd('-', fd);
		n = -1 * n;
	}
	while (n != 0)
	{
		c = '0' + n % (10 * i--);
		ft_putchar_fd(c, fd);
		n = n / 10;
		if (n < 10)
			n = n + 1;
	}
}
