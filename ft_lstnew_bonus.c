/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:42:46 by omansour          #+#    #+#             */
/*   Updated: 2022/11/01 15:39:28 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *) malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
