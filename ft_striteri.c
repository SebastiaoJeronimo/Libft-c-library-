/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:46:30 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/14 15:23:57 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char				*str;
	unsigned int		size_str;
	unsigned int		i;

	i = 0;
	size_str = ft_strlen(s);
	/*str = (char *) malloc(ft_strlen(s) + 1);
	str[ft_strlen(s)] = '\0';*/
	while (i < size_str)
	{
		f(i, s);
		i++;
	}
}