/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:35 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/12 22:48:50 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
                                   
static int	compute_size(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size_for_malloc; //guardar signal
	int		index_for_allocation;
	int		signal;

	signal = 0;
	index_for_allocation = 0;
	if (n == -2147483648) //Tratar o caso maior
		return ("-2147483648");
	size_for_malloc = compute_size(n);
	if (n < 0)
	{
		signal = 1;
		n = n * -1;
		index_for_allocation++;
	}
	ptr = (char *) malloc ((sizeof(char)*size_for_malloc +1 +index_for_allocation));
	ptr[size_for_malloc +index_for_allocation -1] = '\0';
	while ( n != 0) 
	{
		ptr [size_for_malloc -1 +index_for_allocation -1] = n%10 +'0';
		n = n/10;
	}
	if (signal != 0)
		ptr[0] = '-';
	return ptr
}