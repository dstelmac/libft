/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:29:39 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/22 15:22:47 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!s && !d)
		return (NULL);
	else if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
