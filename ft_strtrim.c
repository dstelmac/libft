/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:06:32 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/02 19:12:30 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#imclude "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char *dest;	

	if (!s1)
		return (NULL);
	if (s1 <= set)
		return (NULL)
		
	len = ft_strlen(s1);
	
	
	
}