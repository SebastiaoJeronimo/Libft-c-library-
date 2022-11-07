/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:21:25 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/07 23:34:27 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char *s ,char c)
{
    int nwords;
    int isword;
    int index;

    index = 0;
    isword = 0;
    while(s[index])
    {
        if(s[index] != c && isword == 0)
        {
            isword = 1;
            nwords++;
        }
        if(s[index] == c)
            isword = 0;
        index++;
    }
    return (nwords);
}

char    **ft_split(char const *s, char c)
{
    char **splitstr;
    //ver quantas substrings existem por tudo num count
    int i;
    int j;
    int isword;
    int nwords;

    nwords, i, j , isword = ft_countwords(s ,c), 0, 0, 0;
    splitstr = (char **) malloc (sizeof(char *) *(nwords+1));
    while(s[i]) //dygeiygfgehf
    {   
        if( s[i]== c)
            isword == 0;
        else
        {
           while(s1[i] != c)
                splitstr[j] =      //fazer esta cena
        }
    } //gfuhf2uhfeigfhiwhirghiwhiehfih2i4
    splitstr[i] = '\0'; //to ckeck end the matrix in null so we can check how many we have
}