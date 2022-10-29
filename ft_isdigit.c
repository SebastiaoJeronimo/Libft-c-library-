#include "libft.h"
int ft_isdigit(int c)//ver se e int ou char
{
    if((c >= '0' && c <= '9'))
        return 1;
    return 0;
}