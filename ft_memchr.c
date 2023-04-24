/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:23:07 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/24 14:02:08 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;

	ch = c;
	i = 0;
	
	while (i < n && str)
		{
			if ((((unsigned char *)str))[i] == ch)
				return ((char *)(str + i));
			i++;
		}
	if (!ch)
		return (NULL);
	return (0);
}
