/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:28:40 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/28 14:12:54 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(int number)
{
	if (number > 9)
		return (1 + number_size(number / 10));
	return (1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	possible_minus;
	int	positive_n;

	positive_n = n;
	possible_minus = 0;
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n < 0)
	{
		possible_minus = 1;
		positive_n = n * -1;
	}
	write(fd, ft_itoa(n), number_size(n)+possible_minus);
}
