/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:29:39 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/19 20:51:32 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*temp;
	size_t	i;

	i = 0;
	temp = NULL;
	if (src && dest)
		return (0);
	while (i < n)
	{
		((unsigned char *)temp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	while (((unsigned char *)dest)[i])
	{
		((unsigned char *)temp)[i] = ((unsigned char *)dest)[i];
	}
	return (temp);
}
