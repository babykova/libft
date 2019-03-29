/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:56:40 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/29 22:04:23 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list1;
	t_list	*list2;

	list1 = *alst;
	while (list1)
	{
		list2 = list1;
		ft_lstdelone(&list1, del);
		list1 = list2->next;
	}
	*alst = NULL;
}
