/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:29:38 by omansour          #+#    #+#             */
/*   Updated: 2022/11/01 03:13:21 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		curr = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(curr, del);
	}
}
