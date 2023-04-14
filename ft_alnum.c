/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:42:22 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/14 23:49:16 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c <= 'Z' && c >= 'A')
			|| (c <= 'z' && c >= 'a'))
            return (1);
    if (c <= '0' && c >= '9')
            return (1);
    return (0);
}