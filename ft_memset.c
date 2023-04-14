/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:43:02 by dstelmac          #+#    #+#             */
/*   Updated: 2023/04/15 00:17:23 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* porque size_t 
O parâmetro n da função memset() representa um tamanho 
de memória em bytes. Como o tamanho do tipo int pode variar de 
acordo com a arquitetura do sistema, é recomendável usar o tipo 
size_t para garantir a portabilidade da função memset() em diferentes 
plataformas e sistemas operacionais. Além disso, o tipo size_t é 
capaz de representar o tamanho máximo de um objeto que pode ser armazenado 
em um determinado sistema, permitindo que a função trate corretamente tamanhos 
grandes e não negativos de memória.*/

#include "libft.h"
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)s)[i] = (unsigned char*)c;
        i++;
    }    
    return (s);
}
// Para evitar esse problema, o valor do parâmetro c é convertido 
// explicitamente para unsigned char, garantindo que o valor seja interpretado 
// como um número sem sinal de 8 bits, com valores possíveis de 0 a 255. 
// Dessa forma, independentemente do valor de c,
//  a função preencherá a memória corretamente com os valores desejados.