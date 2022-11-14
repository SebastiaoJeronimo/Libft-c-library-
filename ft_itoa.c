/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:35 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/14 22:07:26 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compute_size(int n)
{
	if (n > 9)
		return (1 + compute_size(n / 10));
	return (1);
}

static void	transform(char *dest, int number, int index_start, int str_size)
{
	while (str_size != 0)
	{
		dest[index_start + str_size - 1] = number % 10;
		number = number / 10;
		str_size--;
	}
}

char	*ft_itoa(int n)
{
	char *ptr;
	int index_for_allocation;
	int signal;

	signal = 0;
	index_for_allocation = 0;
	if (n == -2147483648) // Tratar o caso maior
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		signal = 1;
		n = n * -1;
		index_for_allocation++; // mais um no index 0
	}
	ptr = (char *)calloc((compute_size(n) + signal + 1), sizeof(char));
	if (signal == 1)
		ptr[0] == '-';
	transform(ptr, n, index_for_allocation, compute_size(n));
	return (ptr);
}