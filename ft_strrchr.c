int     ft_strlen(char *ptr)
{
    int i;
    i=0;
    while(ptr[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strrchr(char *str, int c)//ver se e int ou char
{
    int lenght_str;

    lenght_str = ft_strlen(str) -1; //minus 1 to use this as an index going from the back
    while(lenght_str >= 0)
    {
        if(str[lenght_str] == c)
        {
            return &str[lenght_str];
        }
        return 0;
    }
}