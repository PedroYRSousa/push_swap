/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:37 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:33:34 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	destroy_node(t_stack **node)
{
	if (!node || !(*node))
		error("DEBUG: The Node sent to destroy_node is null.");
	(*node)->next = NULL;
	(*node)->prev = NULL;
	free ((*node));
	node = NULL;
}
