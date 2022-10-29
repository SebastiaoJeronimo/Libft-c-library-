#include "libft.h"
//first check the spaces
//check if the number is negative
//calcular o resultado com a formula res = res*10 + char - '0'
int ft_atoi(const char *str)
{
    int i; //index
    int res; //result
    int signal; //signal 

    signal = 1;
    res = 0;
    i = 0;
while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
if(str[i] == '-' || str[i] == '+')
{
    if(str[i] == '-')
        signal = -signal;
    i++;
}
while(str[i]>= '0' && str[i] <= '9')
{
    res = res*10 + (str[i] + (str[i] - '0'));
    i++;
}    
return (res * signal);
}