/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:49 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/07 16:59:26 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int bellongs(char c, char *set)
{
	int i;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int findlowerbound(char *s1 , char *set)
{
	int index;
	int lowerbound;

	index = 0;
	lowerbound = 0;
	while (s1[index] && bellongs(s1[index], set))
	{
		index++;
		lowerbound++;
	}
	return lowerbound;
}

static int findupperbound(char *s1 , char *set)
{
	int index;
	int upperbound;

	index = ft_strlen(s1)-1;
	upperbound = ft_strlen(s1)-1;
	while (s1[index] && bellongs(s1[index], set)) // nao precisas de checkar a excecao ate ao fim pq no if anterior ja trata
	{
	index--;
	upperbound--;
	}
	return (upperbound - 1);
}

	char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int upperbound;
	int lowerbound;
	int index;

	lowerbound, upperbound, index = 1, 1, 0;
	if (!s1 || set == '\0') // excecoes
		return (s1);
	lowerbound = findlowerbound(s1, set);
	if (lowerbound >= ft_strlen(str)) //ver excecao apaga o array todo
		return (0);
	upperbound = findupperbound(s1, set);
	str = (char *) malloc((1 + lowerbound) + upperbound + 1);
	while (lowerbound <= upperbound)
	{
		str[index++] = s1[lowerbound++];
	}
	return (str);
}