/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:19:13 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/07 23:40:08 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
        lenght_str--;
    }
    return 0;
}