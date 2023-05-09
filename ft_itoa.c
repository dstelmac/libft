/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:23:51 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/09 22:04:04 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	length(long nr)
{
	unsigned int	len;

	len = 0;
	if (nr == 0)
		return (1);
	if (nr < 0)
		len = len + 1;
	while (nr != 0)
	{
		nr = nr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long			nr;
	unsigned int	len;

	nr = n;
	len = length(nr);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (nr < 0)
	{
		str[0] = '-';
		nr = -nr;
	}
	if (nr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nr != 0)
	{
		str[len - 1] = (nr % 10) + 48;
		nr = nr / 10;
		len--;
	}
	return (str);
}
