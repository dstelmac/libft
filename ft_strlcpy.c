/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:09:37 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/22 15:23:05 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	size_r;

	size_r = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && (i + 1) < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_r);
}
