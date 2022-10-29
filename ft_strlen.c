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