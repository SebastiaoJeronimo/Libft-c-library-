/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:11:23 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/07 14:17:48 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	char *substr = (char *) malloc(sizeof(char) *len);
	if (!substr)
		return 0;
	while(s[start+1] && i<len)
	{
		substr[i] = s[start+i];
		i++;
	}
	return substr;
}