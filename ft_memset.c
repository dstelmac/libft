/* porque size_t 
O parâmetro n da função memset() representa um tamanho 
de memória em bytes. Como o tamanho do tipo int pode variar de 
acordo com a arquitetura do sistema, é recomendável usar o tipo 
size_t para garantir a portabilidade da função memset() em diferentes 
plataformas e sistemas operacionais. Além disso, o tipo size_t é 
capaz de representar o tamanho máximo de um objeto que pode ser armazenado 
em um determinado sistema, permitindo que a função trate corretamente tamanhos 
grandes e não negativos de memória.*/
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *p++ = (unsigned char)c;
        i++;
    }    
    return (s);
}