/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:11:09 by scosta-j          #+#    #+#             */
/*   Updated: 2022/10/30 21:22:53 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    /*if (!dest)              //nao sei se e suposto fazer o check que e null
    return (dest);*/           //the behavior if a NULL pointer is passed is undifined
    char *char_dst = (char *) dest;
    char *char_src = (char *) src;

    i = 0;
    while(i < n)
    {
    char_dst[i] = char_src[i];
    i++;
    }
    return (dest);
}