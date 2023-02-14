/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:00:11 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/14 19:52:22 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (character);
	}
	if (character >= 'A' && character <= 'Z')
	{
		return (character);
	}
	return (0);
}
