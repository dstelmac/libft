/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:06:32 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/03 21:32:42 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		str;
	char	*dest;

	if (!s1)
		return (NULL);
	str = 0;
	end = ft_strlen(s1);
	while (s1[str] && ft_strchr(set, s1[str]))
		str++;
	while (end > str && ft_strchr(set, s1[end - 1]))
		end--;
	dest = ft_substr(s1, str, (end - str));
	return (dest);
}
