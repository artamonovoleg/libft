#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (dest == NULL)
        return dest;
    
    size_t i = 0;
    while (i < n)
    {
        ((char*)dest)[i] = ((char*)src)[i];
        i++;
    }

    return dest;
}