/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:04:59 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/26 19:40:38 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)lit;
	if (*l == '\0')
		return (b);
	i = 0;
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && b[i + j] == l[j])
		{
			if (l[j + 1] == '\0')
				return (b + i);
			j++;
		}
		i++;
	}
	return (0);
}
