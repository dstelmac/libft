/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:04:59 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/26 19:09:14 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char	*big, const char *lit, size_t len)
{
	size_t  i;
    size_t  j;
    
    if (!lit)
        return(big);
    i = 0;
    
    while(big[i] != '\0' && i < len)
    {
        j = 0;
        while(j < len && big[i+j] == lit [j])
        {
            if(lit [j + 1] == '\0')
                return(big[i]);
            j++;
        }
        i++;
    }
    return (0);
}
