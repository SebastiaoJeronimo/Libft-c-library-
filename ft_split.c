int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char    **ft_split(char *str, char *charset)
{
    char    **ptr_of_ptrs;
    int     lenght_of_str;
    //ver o tamanho da string str
    lenght_of_str = ft_strlen(str);
    
}