/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 19:45:23 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 19:46:49 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = (NULL);
}