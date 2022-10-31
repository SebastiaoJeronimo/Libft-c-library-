/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:12:58 by scosta-j          #+#    #+#             */
/*   Updated: 2022/10/30 22:06:39 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char buffer[n];
	//the behaviour of passing a NULL pointer is undifined
	char *char_dst = (char *) dest;
    char *char_src = (char *) src;
	size_t i;

	i = 0;
	while(i < n)
	{
		buffer[i] = char_src[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		char_dst[i] = buffer[i];
	}
	return (dest);
}