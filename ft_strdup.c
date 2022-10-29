#include<stdlib.h>

//copia o conteudo da src para o dst
char    *ft_strcpy(char *dest,char *src)
{
    int i;
    while(src[i])
    {
        dest[i]= src[i];
        i++;
    }
    return (dest);
}

//aloca memoria para guardar uma copia da cadeia de caracteres src 
char *ft_strdup(char *src)
{
    char *ptr;

    ptr = malloc(sizeof(src) +1);
    if(!ptr)
        return 0;
    ft_strcpy(ptr, src);
    return (ptr);
}