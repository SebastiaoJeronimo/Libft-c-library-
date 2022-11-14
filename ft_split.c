/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:21:25 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/14 11:52:37 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1 contar quantas palvaras existem 
//2 atribuir ao apontador de apontadores de char quantas unidades de memoria tem (consoante o n de palavras)
//3 determinar com um index ate aonde e quanto para alocar memoria para cada string e com um index atrasado
//alocar memoria para esse apontador (nao esquecer do end of line)
//4 por um /0 no final ver se tem que ser NULL por causa da Francinette para proteger e dar para ver quantas funcoes existem
//5 
static int ft_countwords(char *s ,char c)
{
    int		nwords;
    int		isword;
    int		index;

    index = 0;
    isword = 0;
	nwords = 0;
    while (s[index])
    {
        if (s[index] != c && isword == 0)
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
    int i;
    int old_i;    
    int nwords;
    int wordsIndex;
    int countmallocindex;

    wordsIndex = 0;
	nwords = ft_countwords((char *)s, c);
	i = 0;
	old_i = 0;
	countmallocindex  = 0;
    splitstr = (char **)ft_calloc (sizeof(char *), (nwords+1));
    while(s[i]) //dygeiygfgehf
    {   
        old_i = i;
        if(s[i] == c)
        {
            old_i++;
            i++;
        }
        else
        {
            while(s[i] != c && s[i])
                i++;
            splitstr[wordsIndex] = (char *) ft_calloc(sizeof(char *), (i-old_i+1));
            while( s[old_i] && old_i < i)
                splitstr[wordsIndex][countmallocindex++] = s[old_i++]; 
            wordsIndex++;    
            countmallocindex = 0;
        }
    }
    return (splitstr);
}