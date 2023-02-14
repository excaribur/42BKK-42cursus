/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:56:11 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/14 23:42:25 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(unsigned char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (letter);
	}
	if (letter >= 'A' && letter <= 'Z')
	{
		return (letter);
	}
	if (letter >= '0' && letter <= '9')
	{
		return (letter);
	}
	return (0);
}