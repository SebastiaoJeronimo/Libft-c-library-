/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:18:32 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/07 14:26:13 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int strindex;

	i = 0;
	strindex = 0;
	char *str  = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) +1 ); //+1 for the '\0'
	if (!str)
		return 0;
	while (s1[i])
	{
		str[strindex] = s1[i];
		strindex++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[strindex] = s2[i];
		strindex++;
		i++;
	}
	return (str);
}