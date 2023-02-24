/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 02:02:56 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 02:47:36 by jphonyia         ###   ########.fr       */
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
		write(fd, "0", 1);
	i = count(n) - 1;
	if (n < 0)
	{
		n = n + 1;
		write(fd, "-", 1);
		n = -n;
	}	
	while (n != 0)
	{
		c = '0' + n % (10 * i--);
		write(fd, &c, 1);
		n = n / 10;
		if (n < 10)
			n = n + 1;
	}
}
