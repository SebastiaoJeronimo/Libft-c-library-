#include "libft.h"
size_t     ft_strlen(const char *ptr)
{
    int i;
    i=0;
    while(ptr[i])
    {
        i++;
    }
    return (i);
}