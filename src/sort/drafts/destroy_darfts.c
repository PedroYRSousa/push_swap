/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_darfts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:24:09 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 18:59:39 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	destroy_darfts(t_darfts **darfts, int size)
{
	int			index;
	t_darfts	*node;

	index = 0;
	while (index < size)
	{
		while (darfts[index])
		{
			node = pop_stack(&darfts[index]);
			destroy_node(&node);
		}
		free(darfts[index]);
		index++;
	}
	free(darfts);
}
