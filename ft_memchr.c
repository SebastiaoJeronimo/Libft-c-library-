/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:13:34 by scosta-j          #+#    #+#             */
/*   Updated: 2022/10/30 23:38:24 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *uns_chr_s = (unsigned char *) s;
	unsigned char uns_c = (unsigned char) c;
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (uns_chr_s[i] == uns_c)
			return (&uns_chr_s[i]); //ver isto com atencao se nao e s mas deve resultar
		i++;
	}
	return (0);
}