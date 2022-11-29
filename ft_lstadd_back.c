/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:50:03 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/28 18:05:52 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	tmp_lst = *lst;
	if (!*lst)
	{
		*lst = ft_lstnew(new->content);
		return ;
	}
	while (tmp_lst->next != NULL)
	{
		tmp_lst = tmp_lst->next;
	}
	tmp_lst->next = new;
}
