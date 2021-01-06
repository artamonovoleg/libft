#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    
    if (s == NULL)
        return s;

    while (i < n)
    {
        ((char*)s)[i] = c;
        i++;
    }

    return s;
}