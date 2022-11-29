/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:52:46 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/28 22:53:23 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*lst_final;
	int		n_nodes;

	n_nodes = ft_lstsize(lst);
	lst_final = (t_list *) malloc (sizeof(t_list *) * n_nodes);
	lst_final = lst;
	f(lst_final);
	return (lst_final);
}

// aqui criar uma nova lista
// while (lst->next != NULL)
// criar um novo node
// aplicar newn->content = f(lst->content)
// lst = lst->next (fazer o loop)
//

