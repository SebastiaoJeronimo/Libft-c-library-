#include "libft.h"
char * ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i; //index 
    size_t size_of_little; //size of the function that we 
    
    i = 0;
    size_of_little = ft_strlen(little);
    if (little[i] == '\0')
        return (big);
    while (i < len)
    {
        if(ft_strncmp(&big[i],little, size_of_little) == 0)
            return (&big[i]);
        i++;
    }
    return (0);
}