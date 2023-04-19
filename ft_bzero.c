/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:46:26 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/19 19:37:30 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// void    ft_bzero(void *s, size_t n);

// int main() {
//     char str[10] = "hello";
//     printf("Before ft_bzero: %s\n", str);

//     ft_bzero(str, sizeof(str));

//     printf("After ft_bzero: %s\n", str);
//     return (0);
// }
