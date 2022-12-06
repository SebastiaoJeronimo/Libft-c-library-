/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:12:58 by scosta-j          #+#    #+#             */
/*   Updated: 2022/12/05 22:15:39 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	buffer[n];
	char	*char_dst;
	char	*char_src;
	size_t	i;

	i = 0;
	char_dst = (char *) dest;
	char_src = (char *) src;
	while (i < n)
	{
		buffer[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		char_dst[i] = buffer[i];
		i++;
	}
	return (dest);
}
