int isalnum(int c)//ver se é char ou int
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    if((c >= '0' && c <= '9'))
        return 1;
    return 0; 
}