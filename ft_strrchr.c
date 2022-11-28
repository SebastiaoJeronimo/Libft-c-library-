/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:19:13 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/28 14:29:04 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int lenght_str;

    lenght_str = ft_strlen(s) -1; //minus 1 to use this as an index going from the back
    while(lenght_str >= 0)
    {
        if(s[lenght_str] == c)
        {
            return (char *) &s[lenght_str];
        }
        lenght_str--;
    }
    return 0;
}