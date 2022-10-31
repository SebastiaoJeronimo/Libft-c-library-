/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:13:13 by scosta-j          #+#    #+#             */
/*   Updated: 2022/10/30 23:30:27 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i; //index 

	char *chr_s1 = (char *) s1;
	char *chr_s2 = (char *) s2;
	i = 0;
    while (i < n)
    {
        if(chr_s1[i] == chr_s2[i])
        {
            if(chr_s1[i] == '\0')
                return (0);
        }
        else 
            return (chr_s1[i]-chr_s2[i]);
        i++;
    }
    return (0);
}